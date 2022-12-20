/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:12:07 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/20 18:41:31 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// class et instance class la partie fixe et intance la partie dynamique

#include "Sample.class.hpp"
#include "Sample2.class.hpp"
#include <iostream>

int	main(void)
{
	Sample	instance1('a', 42, 4.2f);
	Sample2 instance2('z', 13, 3.14f);
	
	// instance.foo = 42;
	// std::cout << "instance.foo: " << instance.foo <<std::endl;
	
	// instance.bar();
	return 0;
}