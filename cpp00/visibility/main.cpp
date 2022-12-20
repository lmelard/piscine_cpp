/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:21:29 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/20 19:30:25 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

int	main(void)
{
	Sample	instance;

	instance.publicFoo = 42;
	std::cout << "instance publicfoo: " <<instance.publicFoo <<std::endl;
	instance.publicBar();
	// instance._privateFoo = 42;
	// std::cout << "instance _privateFoo: " <<instance._privateFoo <<std::endl;
	// instance._privateBar();
	return 0;
}