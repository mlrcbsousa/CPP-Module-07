/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:31:46 by msousa            #+#    #+#             */
/*   Updated: 2022/04/22 17:33:33 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
# define __ARRAY_H__

# include <iostream>

# define LOG(x) std::cout << x << std::endl
# define ERROR(x) std::cerr << x << std::endl

// ************************************************************************** //
//                         	Array Class Template                          	  //
// ************************************************************************** //

class Array {

public:

	Array( void );
	Array( Array const & src );
	~Array( void );
	Array &	operator = ( Array const & rhs );

private:



};

std::ostream &	operator << ( std::ostream & o, Array const & i );

#endif /* __ARRAY_H__ */
