// Copyright (C) 2013 Romain Francois
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

#ifndef Rcpp_api_meat_SlotProxy_h
#define Rcpp_api_meat_SlotProxy_h

namespace Rcpp{

    template <typename CLASS>
    template <typename T> 
    typename SlotProxyPolicy<CLASS>::SlotProxy& SlotProxyPolicy<CLASS>::SlotProxy::operator=( const T& rhs ){
        set( wrap( rhs ) ) ;
        return *this ;
    }
    
    template <typename CLASS>
    template <typename T>
    SlotProxyPolicy<CLASS>::SlotProxy::operator T() const {
        return as<T>(get()) ;    
    }

    template <typename CLASS>
    template <typename T>
    SlotProxyPolicy<CLASS>::const_SlotProxy::operator T() const {
        return as<T>(get()) ;    
    }

}
#endif
