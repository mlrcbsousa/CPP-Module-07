/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:20:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/22 18:00:50 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void )
{
	Array< int > 			numbers(5);
	Array< std::string > 	strings(1);
	Array< int > 			nothing;

	// subscript operator []
	numbers[3] = 42;
	strings[0] = "Hello world!";
	LOG(numbers[3]);		// 42
	LOG(strings[0]);		// Hello world!

	// size
	LOG(nothing.size());	// 0
	LOG(numbers.size());	// 5
	LOG(strings.size());	// 1

	// assignment operator =
	nothing = numbers;

	LOG(nothing.size());	// 5
	LOG(nothing[3]);		// 42
	LOG(numbers[3]);		// 42

	nothing[3] = 21;

	LOG(nothing[3]);		// 21
	LOG(numbers[3]);		// 42

	// limit
	try { LOG(numbers[7]); }
	catch( std::exception &e ) { LOG(e.what()); }

    return 0;
}
