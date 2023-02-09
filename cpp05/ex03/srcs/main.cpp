/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:09:40 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/09 11:39:25 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int	main(void)
{
	Intern someRandomIntern;
	AForm* rrf;
	AForm* scf;
	AForm* ppf;
	AForm* echec;

	try
	{
		rrf = someRandomIntern.makeform("robotomy request", "Bender");
		std::cout << *rrf << std::endl << std::endl;
		try
		{
			scf = someRandomIntern.makeform("shrubbery creation", "Tender");
			std::cout << *scf << std::endl;
			try
			{
				ppf = someRandomIntern.makeform("presidential pardon", "Pender");
				std::cout << *ppf << std::endl;
				try
				{
					echec = someRandomIntern.makeform("random text", "lol");
					std::cout << *echec << std::endl;
				}
				catch(const std::exception& e)
				{
					std::cerr << BRED << e.what() << std::endl << RESET;
					delete rrf;
					delete scf;
					delete ppf;
					return (1);
				}
			}
			catch(const std::exception& e)
			{
				delete rrf;
				delete scf;
				std::cerr << BRED << e.what() << std::endl << RESET;
				return (1);
			}
		}
		catch(const std::exception& e)
		{
			delete rrf;
			std::cerr << BRED << e.what() << std::endl << RESET;
			return (1);
		}
		delete rrf;
		delete scf;
		delete ppf;
		delete echec;
	}
	catch(const std::exception& e)
	{
		std::cerr << BRED << e.what() << std::endl << RESET;
	}
	return (0);
}
