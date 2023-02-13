/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:26:53 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/13 20:18:58 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <cstdlib>

#define NBR 10000

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;	
	}

	/***************************************************/
	
	std::cout << std::endl;
	{
		Span sp2 = Span(6);
		try 
		{
			sp2.addRangeNumber(2);
			std::cout << "first elem: " << sp2.getElem(0) << std::endl; 
			std::cout << "second elem: " << sp2.getElem(1) << std::endl;
			std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
			std::cout << "longest span: " << sp2.longestSpan() << std::endl;
			std::cout << "sp2 size: " << sp2.getVectorSize() << std::endl;
			sp2.addRangeNumber(3);
			std::cout << "sp2 size: " << sp2.getVectorSize() << std::endl;
			std::cout << "first elem: " << sp2.getElem(0) << std::endl; 
			std::cout << "second elem: " << sp2.getElem(1) << std::endl;
			std::cout << "third elem: " << sp2.getElem(2) << std::endl; 
			std::cout << "fourth elem: " << sp2.getElem(3) << std::endl;
			std::cout << "fith elem: " << sp2.getElem(4) << std::endl;
			std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
			std::cout << "longest span: " << sp2.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	/***************************************************/
	
	std::cout << std::endl;
	{
		Span sp3(2);
		try
		{
			sp3.addNumber(6);
			sp3.addNumber(3);
			sp3.addNumber(42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}	
	}
	
	/***************************************************/
	
	std::cout << std::endl;
	{
		Span sp4(NBR);
		Span sp6(3);
		sp6.addNumber(65);
		sp6.addNumber(65);
		sp6.addNumber(65);
		try
		{
			sp4.addRangeNumber(NBR);
			std::cout << "shortest span: " << sp4.shortestSpan() << std::endl;
			std::cout << "longest span: " << sp4.longestSpan() << std::endl;
			std::cout << "sp4 size: " << sp4.getVectorSize() << std::endl;
			Span sp5(sp4);
			std::cout << "shortest span: " << sp5.shortestSpan() << std::endl;
			std::cout << "longest span: " << sp5.longestSpan() << std::endl;
			std::cout << "sp5 size: " << sp4.getVectorSize() << std::endl;
			sp5 = sp6;
			std::cout << "shortest span: " << sp5.shortestSpan() << std::endl;
			std::cout << "longest span: " << sp5.longestSpan() << std::endl;
			std::cout << "sp5 size: " << sp5.getVectorSize() << std::endl;
		//	std::cout << "sp5 as elem " << sp5.getElem(9998) << std::endl;
			sp5.addNumber(2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}	
	}
	

	return 0;
}