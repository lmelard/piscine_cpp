/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:58:24 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/21 15:02:24 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

int	main(void)
{
	Sample	instance;

	instance.setFoo(42);
	std::cout << "instance .getFoo(): " <<instance.getFoo() <<std::endl;
	instance.setFoo(-42);
	std::cout << "instance .getFoo(): " <<instance.getFoo() <<std::endl;
	return 0;
}