/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:58:47 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/11 15:11:45 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base * generate(void)
{
	srand(time(0));
	int i = rand()%3;
	if (i == 0)
	{
		A* a = new A;
		std::cout << "A instantiated" << std::endl;
		return (dynamic_cast<Base*>(a));
	}
	else if (i == 1)
	{
		B* b = new B;
		std::cout << "B instantiated" << std::endl;
		return (dynamic_cast<Base*>(b));
	}
	else if (i == 2)
	{
		C* c = new C;
		std::cout << "C instantiated" << std::endl;
		return (dynamic_cast<Base*>(c));
	}
	return (0);
}

void identify(Base* p)
{
	A* a;
	B* b;
	C* c;
	
	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);
	
	if (a)
		std::cout << "Type A identified from a Base*" << std::endl;
	else if (b)
		std::cout << "Type B identified from a Base*" << std::endl;
	else if (c)
		std::cout << "Type C identified from a Base*" << std::endl;
	else
		std::cout << "Dynamic cast error!" << std::endl;
	return ;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Type A identified from a Base&" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
		std::cout << "Cast error: Base& is not a Type A" << std::endl;
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Type B identified from a Base&" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
		std::cout << "Cast error: Base& is not a Type B" << std::endl;
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Type C identified from a Base&" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
		std::cout << "Cast error: Base& is not a Type C" << std::endl;
	}
}

int	main(void)
{
	Base* random = generate();

	identify(random);
	identify(*random);
	
	delete random;
	return (0);
}
