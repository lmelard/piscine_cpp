/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:26:39 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/19 13:31:03 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"
#include <iostream>

int	main(void)
{
	Integer	x(30);
	Integer	y(10);
	Integer	z(0);
	
	std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << y << std::endl;
	y = Integer(12);
	std::cout << "Value of y : " << y << std::endl;
	z = x + y;
	std::cout << "Value of z : " << z << std::endl;
	return (0);
}