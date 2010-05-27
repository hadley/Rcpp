// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; tab-width: 8 -*-
//
// Module_generated_CppMethod.h: Rcpp R/C++ interface class library -- Rcpp modules
//
// Copyright (C) 2010	Dirk Eddelbuettel and Romain Francois
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

#ifndef Rcpp_Module_generated_CppMethod_h
#define Rcpp_Module_generated_CppMethod_h

	template <typename Class, typename OUT> class CppMethod0 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(void) ;
		typedef CppMethod<Class> method_class ;
		CppMethod0( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( ) ) ;
		}
		inline int nargs(){ return 0 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template <typename Class> class CppMethod0<Class,void> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(void) ;
		typedef CppMethod<Class> method_class ;
		CppMethod0( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 0 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;



	template < typename Class, typename OUT, typename U0 > class CppMethod1 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod1(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ) ) ) ;
		}
		inline int nargs(){ return 1 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0 > class CppMethod1<Class,void,U0> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod1( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 1 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1 > class CppMethod2 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod2(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ) ) ) ;
		}
		inline int nargs(){ return 2 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1 > class CppMethod2<Class,void,U0, U1> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod2( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 2 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2 > class CppMethod3 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod3(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ) ) ) ;
		}
		inline int nargs(){ return 3 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2 > class CppMethod3<Class,void,U0, U1, U2> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod3( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 3 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3 > class CppMethod4 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod4(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ) ) ) ;
		}
		inline int nargs(){ return 4 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3 > class CppMethod4<Class,void,U0, U1, U2, U3> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod4( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 4 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4 > class CppMethod5 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod5(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ) ) ) ;
		}
		inline int nargs(){ return 5 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4 > class CppMethod5<Class,void,U0, U1, U2, U3, U4> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod5( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 5 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5 > class CppMethod6 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod6(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ) ) ) ;
		}
		inline int nargs(){ return 6 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5 > class CppMethod6<Class,void,U0, U1, U2, U3, U4, U5> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod6( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 6 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6 > class CppMethod7 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod7(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ) ) ) ;
		}
		inline int nargs(){ return 7 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6 > class CppMethod7<Class,void,U0, U1, U2, U3, U4, U5, U6> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod7( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 7 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7 > class CppMethod8 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod8(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ) ) ) ;
		}
		inline int nargs(){ return 8 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7 > class CppMethod8<Class,void,U0, U1, U2, U3, U4, U5, U6, U7> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod8( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 8 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8 > class CppMethod9 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod9(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ) ) ) ;
		}
		inline int nargs(){ return 9 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8 > class CppMethod9<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod9( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 9 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9 > class CppMethod10 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod10(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ) ) ) ;
		}
		inline int nargs(){ return 10 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9 > class CppMethod10<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod10( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 10 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10 > class CppMethod11 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod11(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ) ) ) ;
		}
		inline int nargs(){ return 11 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10 > class CppMethod11<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod11( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 11 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11 > class CppMethod12 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod12(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ) ) ) ;
		}
		inline int nargs(){ return 12 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11 > class CppMethod12<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod12( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 12 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12 > class CppMethod13 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod13(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ) ) ) ;
		}
		inline int nargs(){ return 13 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12 > class CppMethod13<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod13( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 13 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13 > class CppMethod14 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod14(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ) ) ) ;
		}
		inline int nargs(){ return 14 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13 > class CppMethod14<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod14( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 14 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14 > class CppMethod15 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod15(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ) ) ) ;
		}
		inline int nargs(){ return 15 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14 > class CppMethod15<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod15( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 15 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15 > class CppMethod16 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod16(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ) ) ) ;
		}
		inline int nargs(){ return 16 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15 > class CppMethod16<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod16( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 16 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16 > class CppMethod17 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod17(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ) ) ) ;
		}
		inline int nargs(){ return 17 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16 > class CppMethod17<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod17( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 17 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17 > class CppMethod18 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod18(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ) ) ) ;
		}
		inline int nargs(){ return 18 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17 > class CppMethod18<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod18( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 18 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18 > class CppMethod19 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod19(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ) ) ) ;
		}
		inline int nargs(){ return 19 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18 > class CppMethod19<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod19( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 19 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19 > class CppMethod20 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod20(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ) ) ) ;
		}
		inline int nargs(){ return 20 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19 > class CppMethod20<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod20( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 20 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20 > class CppMethod21 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod21(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ) ) ) ;
		}
		inline int nargs(){ return 21 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20 > class CppMethod21<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod21( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 21 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21 > class CppMethod22 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod22(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ) ) ) ;
		}
		inline int nargs(){ return 22 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21 > class CppMethod22<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod22( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 22 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22 > class CppMethod23 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod23(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ) ) ) ;
		}
		inline int nargs(){ return 23 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22 > class CppMethod23<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod23( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 23 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23 > class CppMethod24 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod24(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ) ) ) ;
		}
		inline int nargs(){ return 24 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23 > class CppMethod24<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod24( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 24 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24 > class CppMethod25 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod25(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ) ) ) ;
		}
		inline int nargs(){ return 25 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24 > class CppMethod25<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod25( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 25 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25 > class CppMethod26 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod26(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ) ) ) ;
		}
		inline int nargs(){ return 26 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25 > class CppMethod26<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod26( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 26 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26 > class CppMethod27 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod27(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ) ) ) ;
		}
		inline int nargs(){ return 27 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26 > class CppMethod27<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod27( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 27 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27 > class CppMethod28 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod28(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ) ) ) ;
		}
		inline int nargs(){ return 28 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27 > class CppMethod28<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod28( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 28 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28 > class CppMethod29 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod29(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ) ) ) ;
		}
		inline int nargs(){ return 29 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28 > class CppMethod29<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod29( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 29 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29 > class CppMethod30 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod30(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ) ) ) ;
		}
		inline int nargs(){ return 30 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29 > class CppMethod30<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod30( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 30 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30 > class CppMethod31 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod31(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ) ) ) ;
		}
		inline int nargs(){ return 31 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30 > class CppMethod31<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod31( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 31 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31 > class CppMethod32 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod32(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ) ) ) ;
		}
		inline int nargs(){ return 32 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31 > class CppMethod32<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod32( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 32 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32 > class CppMethod33 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod33(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ) ) ) ;
		}
		inline int nargs(){ return 33 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32 > class CppMethod33<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod33( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 33 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33 > class CppMethod34 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod34(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ) ) ) ;
		}
		inline int nargs(){ return 34 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33 > class CppMethod34<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod34( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 34 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34 > class CppMethod35 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod35(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ) ) ) ;
		}
		inline int nargs(){ return 35 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34 > class CppMethod35<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod35( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 35 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35 > class CppMethod36 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod36(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ) ) ) ;
		}
		inline int nargs(){ return 36 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35 > class CppMethod36<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod36( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 36 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36 > class CppMethod37 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod37(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ) ) ) ;
		}
		inline int nargs(){ return 37 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36 > class CppMethod37<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod37( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 37 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37 > class CppMethod38 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod38(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ) ) ) ;
		}
		inline int nargs(){ return 38 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37 > class CppMethod38<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod38( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 38 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38 > class CppMethod39 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod39(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ) ) ) ;
		}
		inline int nargs(){ return 39 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38 > class CppMethod39<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod39( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 39 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39 > class CppMethod40 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod40(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ) ) ) ;
		}
		inline int nargs(){ return 40 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39 > class CppMethod40<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod40( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 40 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40 > class CppMethod41 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod41(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ) ) ) ;
		}
		inline int nargs(){ return 41 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40 > class CppMethod41<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod41( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 41 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41 > class CppMethod42 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod42(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ) ) ) ;
		}
		inline int nargs(){ return 42 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41 > class CppMethod42<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod42( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 42 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42 > class CppMethod43 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod43(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ) ) ) ;
		}
		inline int nargs(){ return 43 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42 > class CppMethod43<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod43( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 43 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43 > class CppMethod44 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod44(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ) ) ) ;
		}
		inline int nargs(){ return 44 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43 > class CppMethod44<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod44( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 44 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44 > class CppMethod45 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod45(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ) ) ) ;
		}
		inline int nargs(){ return 45 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44 > class CppMethod45<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod45( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 45 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45 > class CppMethod46 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod46(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ) ) ) ;
		}
		inline int nargs(){ return 46 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45 > class CppMethod46<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod46( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 46 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46 > class CppMethod47 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod47(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ) ) ) ;
		}
		inline int nargs(){ return 47 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46 > class CppMethod47<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod47( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 47 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47 > class CppMethod48 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod48(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ) ) ) ;
		}
		inline int nargs(){ return 48 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47 > class CppMethod48<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod48( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 48 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48 > class CppMethod49 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod49(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ) ) ) ;
		}
		inline int nargs(){ return 49 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48 > class CppMethod49<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod49( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 49 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49 > class CppMethod50 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod50(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ) ) ) ;
		}
		inline int nargs(){ return 50 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49 > class CppMethod50<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod50( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 50 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50 > class CppMethod51 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod51(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ) ) ) ;
		}
		inline int nargs(){ return 51 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50 > class CppMethod51<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod51( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 51 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51 > class CppMethod52 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod52(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ) ) ) ;
		}
		inline int nargs(){ return 52 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51 > class CppMethod52<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod52( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 52 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52 > class CppMethod53 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod53(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ) ) ) ;
		}
		inline int nargs(){ return 53 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52 > class CppMethod53<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod53( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 53 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53 > class CppMethod54 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod54(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ) ) ) ;
		}
		inline int nargs(){ return 54 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53 > class CppMethod54<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod54( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 54 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54 > class CppMethod55 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod55(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ) ) ) ;
		}
		inline int nargs(){ return 55 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54 > class CppMethod55<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod55( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 55 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55 > class CppMethod56 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod56(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ) ) ) ;
		}
		inline int nargs(){ return 56 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55 > class CppMethod56<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod56( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 56 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56 > class CppMethod57 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod57(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ) ) ) ;
		}
		inline int nargs(){ return 57 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56 > class CppMethod57<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod57( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 57 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57 > class CppMethod58 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod58(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ) ) ) ;
		}
		inline int nargs(){ return 58 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57 > class CppMethod58<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod58( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 58 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58 > class CppMethod59 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod59(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ) ) ) ;
		}
		inline int nargs(){ return 59 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58 > class CppMethod59<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod59( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 59 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59 > class CppMethod60 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod60(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ), Rcpp::as<U59>( args[59] ) ) ) ;
		}
		inline int nargs(){ return 60 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59 > class CppMethod60<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod60( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ), Rcpp::as<U59>( args[59] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 60 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60 > class CppMethod61 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod61(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ), Rcpp::as<U59>( args[59] ), Rcpp::as<U60>( args[60] ) ) ) ;
		}
		inline int nargs(){ return 61 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60 > class CppMethod61<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod61( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ), Rcpp::as<U59>( args[59] ), Rcpp::as<U60>( args[60] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 61 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61 > class CppMethod62 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod62(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ), Rcpp::as<U59>( args[59] ), Rcpp::as<U60>( args[60] ), Rcpp::as<U61>( args[61] ) ) ) ;
		}
		inline int nargs(){ return 62 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61 > class CppMethod62<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod62( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ), Rcpp::as<U59>( args[59] ), Rcpp::as<U60>( args[60] ), Rcpp::as<U61>( args[61] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 62 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62 > class CppMethod63 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod63(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ), Rcpp::as<U59>( args[59] ), Rcpp::as<U60>( args[60] ), Rcpp::as<U61>( args[61] ), Rcpp::as<U62>( args[62] ) ) ) ;
		}
		inline int nargs(){ return 63 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62 > class CppMethod63<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod63( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ), Rcpp::as<U59>( args[59] ), Rcpp::as<U60>( args[60] ), Rcpp::as<U61>( args[61] ), Rcpp::as<U62>( args[62] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 63 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63 > class CppMethod64 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62, U63 u63) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod64(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ), Rcpp::as<U59>( args[59] ), Rcpp::as<U60>( args[60] ), Rcpp::as<U61>( args[61] ), Rcpp::as<U62>( args[62] ), Rcpp::as<U63>( args[63] ) ) ) ;
		}
		inline int nargs(){ return 64 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63 > class CppMethod64<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62, U63> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62, U63 u63) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod64( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ), Rcpp::as<U59>( args[59] ), Rcpp::as<U60>( args[60] ), Rcpp::as<U61>( args[61] ), Rcpp::as<U62>( args[62] ), Rcpp::as<U63>( args[63] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 64 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;





	template < typename Class, typename OUT, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63, typename U64 > class CppMethod65 : public CppMethod<Class> {
	public:
		typedef OUT (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62, U63 u63, U64 u64) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod65(Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			return Rcpp::wrap( (object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ), Rcpp::as<U59>( args[59] ), Rcpp::as<U60>( args[60] ), Rcpp::as<U61>( args[61] ), Rcpp::as<U62>( args[62] ), Rcpp::as<U63>( args[63] ), Rcpp::as<U64>( args[64] ) ) ) ;
		}
		inline int nargs(){ return 65 ; }
		inline bool is_void(){ return false ; }
	private:
		Method met ;
	} ;
	
	template < typename Class, typename U0, typename U1, typename U2, typename U3, typename U4, typename U5, typename U6, typename U7, typename U8, typename U9, typename U10, typename U11, typename U12, typename U13, typename U14, typename U15, typename U16, typename U17, typename U18, typename U19, typename U20, typename U21, typename U22, typename U23, typename U24, typename U25, typename U26, typename U27, typename U28, typename U29, typename U30, typename U31, typename U32, typename U33, typename U34, typename U35, typename U36, typename U37, typename U38, typename U39, typename U40, typename U41, typename U42, typename U43, typename U44, typename U45, typename U46, typename U47, typename U48, typename U49, typename U50, typename U51, typename U52, typename U53, typename U54, typename U55, typename U56, typename U57, typename U58, typename U59, typename U60, typename U61, typename U62, typename U63, typename U64 > class CppMethod65<Class,void,U0, U1, U2, U3, U4, U5, U6, U7, U8, U9, U10, U11, U12, U13, U14, U15, U16, U17, U18, U19, U20, U21, U22, U23, U24, U25, U26, U27, U28, U29, U30, U31, U32, U33, U34, U35, U36, U37, U38, U39, U40, U41, U42, U43, U44, U45, U46, U47, U48, U49, U50, U51, U52, U53, U54, U55, U56, U57, U58, U59, U60, U61, U62, U63, U64> : public CppMethod<Class> {
	public:
		typedef void (Class::*Method)(U0 u0, U1 u1, U2 u2, U3 u3, U4 u4, U5 u5, U6 u6, U7 u7, U8 u8, U9 u9, U10 u10, U11 u11, U12 u12, U13 u13, U14 u14, U15 u15, U16 u16, U17 u17, U18 u18, U19 u19, U20 u20, U21 u21, U22 u22, U23 u23, U24 u24, U25 u25, U26 u26, U27 u27, U28 u28, U29 u29, U30 u30, U31 u31, U32 u32, U33 u33, U34 u34, U35 u35, U36 u36, U37 u37, U38 u38, U39 u39, U40 u40, U41 u41, U42 u42, U43 u43, U44 u44, U45 u45, U46 u46, U47 u47, U48 u48, U49 u49, U50 u50, U51 u51, U52 u52, U53 u53, U54 u54, U55 u55, U56 u56, U57 u57, U58 u58, U59 u59, U60 u60, U61 u61, U62 u62, U63 u63, U64 u64) ;
		typedef CppMethod<Class> method_class ;
		
		CppMethod65( Method m) : method_class(), met(m){} 
		SEXP operator()( Class* object, SEXP* args){
			(object->*met)( Rcpp::as<U0>( args[0] ), Rcpp::as<U1>( args[1] ), Rcpp::as<U2>( args[2] ), Rcpp::as<U3>( args[3] ), Rcpp::as<U4>( args[4] ), Rcpp::as<U5>( args[5] ), Rcpp::as<U6>( args[6] ), Rcpp::as<U7>( args[7] ), Rcpp::as<U8>( args[8] ), Rcpp::as<U9>( args[9] ), Rcpp::as<U10>( args[10] ), Rcpp::as<U11>( args[11] ), Rcpp::as<U12>( args[12] ), Rcpp::as<U13>( args[13] ), Rcpp::as<U14>( args[14] ), Rcpp::as<U15>( args[15] ), Rcpp::as<U16>( args[16] ), Rcpp::as<U17>( args[17] ), Rcpp::as<U18>( args[18] ), Rcpp::as<U19>( args[19] ), Rcpp::as<U20>( args[20] ), Rcpp::as<U21>( args[21] ), Rcpp::as<U22>( args[22] ), Rcpp::as<U23>( args[23] ), Rcpp::as<U24>( args[24] ), Rcpp::as<U25>( args[25] ), Rcpp::as<U26>( args[26] ), Rcpp::as<U27>( args[27] ), Rcpp::as<U28>( args[28] ), Rcpp::as<U29>( args[29] ), Rcpp::as<U30>( args[30] ), Rcpp::as<U31>( args[31] ), Rcpp::as<U32>( args[32] ), Rcpp::as<U33>( args[33] ), Rcpp::as<U34>( args[34] ), Rcpp::as<U35>( args[35] ), Rcpp::as<U36>( args[36] ), Rcpp::as<U37>( args[37] ), Rcpp::as<U38>( args[38] ), Rcpp::as<U39>( args[39] ), Rcpp::as<U40>( args[40] ), Rcpp::as<U41>( args[41] ), Rcpp::as<U42>( args[42] ), Rcpp::as<U43>( args[43] ), Rcpp::as<U44>( args[44] ), Rcpp::as<U45>( args[45] ), Rcpp::as<U46>( args[46] ), Rcpp::as<U47>( args[47] ), Rcpp::as<U48>( args[48] ), Rcpp::as<U49>( args[49] ), Rcpp::as<U50>( args[50] ), Rcpp::as<U51>( args[51] ), Rcpp::as<U52>( args[52] ), Rcpp::as<U53>( args[53] ), Rcpp::as<U54>( args[54] ), Rcpp::as<U55>( args[55] ), Rcpp::as<U56>( args[56] ), Rcpp::as<U57>( args[57] ), Rcpp::as<U58>( args[58] ), Rcpp::as<U59>( args[59] ), Rcpp::as<U60>( args[60] ), Rcpp::as<U61>( args[61] ), Rcpp::as<U62>( args[62] ), Rcpp::as<U63>( args[63] ), Rcpp::as<U64>( args[64] ) ) ;
			return R_NilValue ;
		}
		inline int nargs(){ return 65 ; }
		inline bool is_void(){ return true ; }
	private:
		Method met ;
	} ;




#endif
