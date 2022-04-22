/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:31:05 by msousa            #+#    #+#             */
/*   Updated: 2022/04/22 17:31:25 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/* Constructors */
Array::Array( void ) { /* no-op */ }
Array::Array( Array const & src ) { *this = src; }

/* Destructor */
Array::~Array( void ) { /* no-op */ }

/* Assignment operator */
Array &	Array::operator = ( Array const & rhs )
{
	if (this != &rhs) {
		//value = rhs.value;
	}
	return *this;
}

/* ostream override */
std::ostream &	operator << ( std::ostream & o, Array const & i )
{
	(void)i;
	o << "Array";
	return o;
}
