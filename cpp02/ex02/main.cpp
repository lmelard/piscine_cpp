/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:53:20 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/30 16:41:12 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(42);
	Fixed const d( Fixed( 32.68f ) / Fixed( 4 ) );
	Fixed e(c);
	
	std::cout << "a fixed point nbr: "<< a << std::endl;
	std::cout << "a preincrementation: " << ++a << std::endl;
	std::cout << "a after pre incrementation: " << a << std::endl;
	std::cout << "a post incrementation: " << a++ << std::endl;
	std::cout << "a after post incrementation: " << a << std::endl; 
	std::cout << "a predecrementation: " << --a << std::endl;
	std::cout << "a after predecrementation: " << a << std::endl;
	std::cout << "a post decrementation: " << a << std::endl << std::endl;
	
	std::cout << "b fixed point number: " << b << std::endl << std::endl;
	
	std::cout << "max between a et b ?" << std::endl;
	std::cout << "a = " << a << " b = " << b << std::endl;
	std::cout << "max = " << Fixed::max( a, b ) << std::endl << std::endl;

	std::cout << "min between a et b ?" << std::endl;
	std::cout << "a = " << a << " b = " << b << std::endl;
	std::cout << "min = " << Fixed::min( a, b ) << std::endl << std::endl;
	
	std::cout << "e fixed point number: " << e << std::endl;
	std::cout << "c fixed point number: " << c << std::endl << std::endl;
	
	std::cout << "c fixed point nbr: "<< c << std::endl;
	std::cout << "c preincrementation: " << ++c << std::endl;
	std::cout << "c after preincrementation: " << c << std::endl;
	std::cout << "c post incrementation: " << c++ << std::endl;
	std::cout << "c after post incrementation: " << c << std::endl << std::endl;

	if (c != a)
		std::cout << "c and a are not equal" << std::endl;
	std::cout << "using operator = btw a and c" << std::endl;
	c = a;
	if (c == a)
		std::cout << "c and a are equal" << std::endl << std::endl;
	
	std::cout << "max between a et c ?" << std::endl;
	std::cout << "a = " << a << " c = " << c << std::endl;
	std::cout << "max = " << Fixed::max( a, c ) << std::endl << std::endl;

	std::cout << "min between a et c ?" << std::endl;
	std::cout << "a = " << a << " c = " << c << std::endl;
	std::cout << "min = " << Fixed::min( a, c ) << std::endl << std::endl;
	
	std::cout << "d fixed point number: " << d << std::endl << std::endl;
	std::cout << "d fixed point number to int: " << b.toInt() << std::endl << std::endl;
	
	return 0;
}
