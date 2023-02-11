/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:58:47 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/11 13:23:20 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

//implicit upcast = OK 

Base * generate(void)
{
	//srand()
}

void identify(Base* p)
{
	Base* random = generate();
	A* a;
	B* b;
	C* c;
	
	a = dynamic_cast<A*>(random);
	b = dynamic_cast<B*>(random);
	c = dynamic_cast<C*>(random);
	
	if (a)
		std::cout << "Type A identified" << std::endl;
	else if (b)
		std::cout << "Type B identified" << std::endl;
	else if (c)
		std::cout << "Type C identified" << std::endl;
	return ;
}

void identify(Base& p)
{
	
}

int	main(void)
{
	Base* random = generate();
	
	
	return (0);
}