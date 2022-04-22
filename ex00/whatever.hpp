/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:36:20 by msousa            #+#    #+#             */
/*   Updated: 2022/04/22 10:57:52 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_H__
# define __WHATEVER_H__

# include <iostream>

template<typename T>
void	swap(T & a, T & b)
{
	T	s = a;
	a = b;
	b = s;
}

template<typename T>
T const &	min(T const & a, T const & b) { return a < b ? a : b; }

template<typename T>
T const &	max(T const & a, T const & b) { return a > b ? a : b; }

#endif
