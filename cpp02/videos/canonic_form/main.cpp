/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:48:14 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/19 17:52:00 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

int	main(void)
{
	Sample	instance1;
	Sample	instance2(42);
	Sample	instance3( instance1 );

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;
	
	instance3 = instance2;
	std::cout << instance3 << std::endl;
	return (0);
}