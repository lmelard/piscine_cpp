/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:18:36 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/07 11:23:20 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>

void test1()
{
	try
	{
		// Do some stuff here
		if (/* there's an error */)
		{
			throw std::exception();
		}
		else
		{
			//Do some mmore stuff
		}
	}
	catch(const std::exception e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	test2()
{
	// Do some stuff here
	if (/* there's an error */)
	{
		throw std::exception();
	}
	else
	{
		// Do some more stuff
	}
}

void	test3()
{
	try
	{
		test2();
	}
	catch(const std::exception& e) // on catche par reference dans ce cas 
	{
		std::cerr << e.what() << '\n';
	}
}

void	test4()
{
	class PEBKACException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Problem exists between keyboard and chair");
			}
	};
	try
	{
		test3();
	}
	catch(PEBKACException& e)
	{
		// Handle the fact that the user is an idiot;
	}
	catch(const std::exception& e)
	{
		//Handle the fact that the user is an idiot
	}
	
}






















