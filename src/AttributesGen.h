// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-
//
// AttributesGen.h: Rcpp R/C++ interface class library -- Rcpp attributes
//
// Copyright (C) 2012 JJ Allaire, Dirk Eddelbuettel and Romain Francois
//
// This file is part of Rcpp.
//
// Rcpp is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Rcpp is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Rcpp.  If not, see <http://www.gnu.org/licenses/>.


#ifndef Rcpp__AttributesGen__h
#define Rcpp__AttributesGen__h

#include <string>
#include <vector>
#include <sstream>

#include "AttributesTypes.h"

namespace Rcpp {
namespace attributes {

    // Abstract class which manages writing of code for compileAttributes
    class ExportsGenerator {
    protected:
        ExportsGenerator(const std::string& targetFile, 
                         const std::string& package,
                         const std::string& commentPrefix);
 
    private:
        // prohibit copying
        ExportsGenerator(const ExportsGenerator&);
        ExportsGenerator& operator=(const ExportsGenerator&); 
        
    public:
        virtual ~ExportsGenerator() {}
        
        // Name of target file and package
        const std::string& targetFile() const { return targetFile_; }
        const std::string& package() const { return package_; }
        
        // Abstract interface for code generation
        virtual void writeBegin() = 0;
        void writeFunctions(const SourceFileAttributes& attributes,
                            bool verbose); // see doWriteFunctions below
        virtual void writeEnd() = 0;
        
        virtual bool commit(const std::vector<std::string>& includes) = 0;
        
        // Remove the generated file entirely
        bool remove(); 
        
        // Allow generator to appear as a std::ostream&
        operator std::ostream&() {
            return codeStream_;
        }
        
    protected: 
    
        // Allow access to the output stream 
        std::ostream& ostr() {
            return codeStream_;
        }
        
        bool hasCppInterface() const {
            return hasCppInterface_;
        }
        
        // Shared knowledge about function namees
        std::string exportValidationFunction() {
            return "RcppExport_validate";
        } 
        std::string exportValidationFunctionRegisteredName() {
            return package() + "_" + exportValidationFunction();
        } 
        std::string registerCCallableExportedName() {
            return package() + "_RcppExport_registerCCallable";
        }

        // Commit the stream -- is a no-op if the existing code is identical
        // to the generated code. Returns true if data was written and false
        // if it wasn't (throws exception on io error)
        bool commit(const std::string& preamble = std::string()); 
        
    private:
    
        // Private virtual for doWriteFunctions so the base class 
        // can always intercept writeFunctions
        virtual void doWriteFunctions(const SourceFileAttributes& attributes,
                                      bool verbose) = 0;
    
        // Check whether it's safe to overwrite this file (i.e. whether we 
        // generated the file in the first place)
        bool isSafeToOverwrite() const {
            return existingCode_.empty() || 
                   (existingCode_.find(generatorToken()) != std::string::npos);
        }
        
        // UUID that we write into a comment within the file (so that we can 
        // strongly identify that a file was generated by us before overwriting it)
        std::string generatorToken() const {
            return "10BE3573-1514-4C36-9D1C-5A225CD40393";
        }
    
    private:
        std::string targetFile_;
        std::string package_;
        std::string commentPrefix_;
        std::string existingCode_;
        std::ostringstream codeStream_;
        bool hasCppInterface_;
    };
    
    // Class which manages generating RcppExports.cpp
    class CppExportsGenerator : public ExportsGenerator {
    public:
        explicit CppExportsGenerator(const std::string& packageDir, 
                                     const std::string& package,
                                     const std::string& fileSep);
         
        virtual void writeBegin() {}; 
        virtual void writeEnd();
        virtual bool commit(const std::vector<std::string>& includes); 
        
    private:
        virtual void doWriteFunctions(const SourceFileAttributes& attributes,
                                      bool verbose);
                                    
        std::string registerCCallable(size_t indent,
                                      const std::string& exportedName,
                                      const std::string& name) const;
        
    private:
        std::vector<Attribute> cppExports_;
    };
       
    // Class which manages generating PackageName_RcppExports.h header file
    class CppExportsIncludeGenerator : public ExportsGenerator {
    public:
        CppExportsIncludeGenerator(const std::string& packageDir, 
                                   const std::string& package,
                                   const std::string& fileSep);
         
        virtual void writeBegin(); 
        virtual void writeEnd(); 
        virtual bool commit(const std::vector<std::string>& includes); 
        
    private:
        virtual void doWriteFunctions(const SourceFileAttributes& attributes,
                                      bool verbose);
        std::string getCCallable(const std::string& function) const; 
        std::string getHeaderGuard() const; 
        
    private:
        std::string includeDir_;
    };
    
    // Class which manages generating PackageName_RcppExports.h header file
    class CppPackageIncludeGenerator : public ExportsGenerator {
    public:
        CppPackageIncludeGenerator(const std::string& packageDir, 
                                   const std::string& package,
                                   const std::string& fileSep);
            
        virtual void writeBegin() {}
        virtual void writeEnd(); 
        virtual bool commit(const std::vector<std::string>& includes); 
        
    private:
        virtual void doWriteFunctions(const SourceFileAttributes& attributes,
                                      bool verbose) {}
        std::string getHeaderGuard() const; 
        
    private:
        std::string includeDir_;
    };
    
    
    // Class which manages generator RcppExports.R
    class RExportsGenerator : public ExportsGenerator {
    public:
        RExportsGenerator(const std::string& packageDir,
                          const std::string& package,
                          const std::string& fileSep);
        
        virtual void writeBegin() {}
        virtual void writeEnd(); 
        virtual bool commit(const std::vector<std::string>& includes); 
        
    private:
        virtual void doWriteFunctions(const SourceFileAttributes& attributes,
                                      bool verbose);

    };
    
    // Class to manage and dispatch to a list of generators
    class ExportsGenerators {
    public:
        typedef std::vector<ExportsGenerator*>::iterator Itr;
        
        ExportsGenerators() {}
        virtual ~ExportsGenerators(); 
        
        void add(ExportsGenerator* pGenerator); 
        
        void writeBegin(); 
        void writeFunctions(const SourceFileAttributes& attributes,
                            bool verbose); 
        void writeEnd(); 
        
        // Commit and return a list of the files that were updated
        std::vector<std::string> commit(
                                const std::vector<std::string>& includes); 
        
        // Remove and return a list of files that were removed
        std::vector<std::string> remove(); 
                 
    private:
        // prohibit copying
        ExportsGenerators(const ExportsGenerators&);
        ExportsGenerators& operator=(const ExportsGenerators&); 
        
    private:
        std::vector<ExportsGenerator*> generators_;
    };
    
    // Standalone generation helpers (used by sourceCpp)
    
    std::string generateRArgList(const Function& function);
    
    void generateCpp(std::ostream& ostr,
                     const SourceFileAttributes& attributes,
                     bool includePrototype,
                     bool cppInterface,
                     const std::string& contextId); 

} // namespace attributes
} // namespace Rcpp

#endif // Rcpp__AttributesGen__h