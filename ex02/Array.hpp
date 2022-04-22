/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:31:46 by msousa            #+#    #+#             */
/*   Updated: 2022/04/22 20:17:34 by msousa           ###   ########.fr       */
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

template< typename T >
class Array {

public:

	class OutOfBoundsException : public std::exception {
	public:
		virtual const char*	what( void ) const throw();
	};

	Array<T>( void );
	Array<T>( unsigned int n );
	Array<T>( Array<T> const & src );
	~Array<T>( void );
	Array<T> &		operator = ( Array<T> const & rhs );

	T &				operator [] ( int index ) const;
	unsigned int	size( void ) const;

	T *				getPtr( void ) const;

private:

	unsigned int 	n;
	T *				ptr;

};

template< typename T >
const char*	Array<T>::OutOfBoundsException::what( void ) const throw()
{
	return "index out of bounds of the array";
}

/* Constructors */
template< typename T >
Array<T>::Array( void ) : n(0), ptr(new T[0]) { /* no-op */ }

template< typename T >
Array<T>::Array( unsigned int n ) : n(n), ptr(new T[n]) { /* no-op */ }

template< typename T >
Array<T>::Array( Array<T> const & src ) { *this = src; }

/* Destructor */
template< typename T >
Array<T>::~Array( void ) { delete[] ptr; }

/* Assignment operator */
template< typename T >
Array<T> &	Array<T>::operator = ( Array<T> const & rhs )
{
	if (this != &rhs) {
		if (ptr)
			delete[] ptr;

		n = rhs.size();
		ptr = new T[n];

		T *	copiedPtr = rhs.getPtr();
		for (uint i = 0; i < n; i++)
			ptr[i] = copiedPtr[i];
	}
	return *this;
}

/* Subscript operator */
template< typename T >
T &	Array<T>::operator [] ( int index ) const
{
	if (index + 1 > (int)n || index < 0)
		throw Array<T>::OutOfBoundsException();

	return ptr[index];
}

template< typename T >
unsigned int	Array<T>::size( void ) const { return n; }

template< typename T >
T *	Array<T>::getPtr( void ) const { return ptr; }

/* ostream override */
template< typename T >
std::ostream &	operator << ( std::ostream & o, Array<T> const & array )
{
	o << "[ ";

	if (array.size()) {
		uint i = 0;
		for (; i < array.size() - 1; i++)
			o << array[i] << ", ";
		o << array[i];
	}

	o << " ]";

	return o;
}

#endif /* __ARRAY_H__ */
