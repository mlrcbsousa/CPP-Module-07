/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:36:20 by msousa            #+#    #+#             */
/*   Updated: 2022/04/22 18:39:15 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_H__
# define __ITER_H__

# include <iostream>

template<typename T>
void	iter(T * array, int size, void (*fn)( T const & ))
{
	if (!array)
		return;

	for (int i = 0; i < size; i++)
		fn(array[i]);
}

#endif
