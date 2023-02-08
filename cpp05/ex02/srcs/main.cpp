/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:09:40 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 20:19:51 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	/* SIGNED FORM */
	
	// try
	// {
	// 	ShrubberyCreationForm lol("lol");
	// 	std::cout << lol << std::endl;
	// 	Bureaucrat lena("lena", 2);
	// 	lol.beSigned(lena);
	// 	ShrubberyCreationForm mdr(lol);
	// 	std::cout << mdr << std::endl;
	// 	// ShrubberyCreationForm ptdr;
	// 	// ptdr = mdr;
	// 	// std::cout << ptdr << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << BRED << e.what() << std::endl << RESET;
	// }
	
	
	// try
	// {
	// 	ShrubberyCreationForm shrub("shrub");
	// 	Bureaucrat lena("lena", 137); //138
	// 	std::cout << "before beSigned: " << std::endl;
	// 	std::cout << std::endl << shrub << std::endl;
	// 	shrub.beSigned(lena);
	// 	std::cout << "after beSigned: " << std::endl;
	// 	std::cout << std::endl << shrub << std::endl;
	// 	shrub.execute(lena);
	// }
	// catch (const std::exception& e)
	// {
	// 	std::cout << BRED << e.what() << std::endl << RESET;
	// }

	/* NEW + ERROR LEAK TEST */
	
	// try
	// {
	// 	ShrubberyCreationForm* shrub = new ShrubberyCreationForm("shrub");
	// 	try
	// 	{
	// 		Bureaucrat lena("lena", 138); //138
	// 		std::cout << "before beSigned: " << std::endl;
	// 		std::cout << std::endl << *shrub << std::endl;
	// 		try
	// 		{
	// 			shrub->beSigned(lena);
	// 			std::cout << "after beSigned: " << std::endl;
	// 			std::cout << std::endl << *shrub << std::endl;
	// 			try
	// 			{
	// 				shrub->execute(lena);
	// 			}
	// 			catch(const std::exception& e)
	// 			{
	// 				delete shrub;
	// 				std::cout << BRED << e.what() << std::endl << RESET;
	// 				return 1;
	// 			}
				
	// 		}
	// 		catch(const std::exception& e)
	// 		{
	// 			delete shrub;
	// 			std::cout << BRED << e.what() << std::endl << RESET;
	// 			return 1;
	// 		}
			
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << BRED << e.what() << std::endl << RESET;
	// 	}	
	// delete shrub;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << BRED << e.what() << std::endl << RESET;
	// 	return 1;
	// }
	
	// try
	// {
	// 	RobotomyRequestForm* robot = new RobotomyRequestForm("robot");
	// 	try
	// 	{
	// 		Bureaucrat lena("lena", 45); //138
	// 		std::cout << "before beSigned: " << std::endl;
	// 		std::cout << std::endl << *robot << std::endl;
	// 		try
	// 		{
	// 			robot->beSigned(lena);
	// 			std::cout << "after beSigned: " << std::endl;
	// 			std::cout << std::endl << *robot << std::endl;
	// 			try
	// 			{
	// 				robot->execute(lena);
	// 				robot->execute(lena);
	// 			}
	// 			catch(const std::exception& e)
	// 			{
	// 				delete robot;
	// 				std::cout << BRED << e.what() << std::endl << RESET;
	// 				return 1;
	// 			}
				
	// 		}
	// 		catch(const std::exception& e)
	// 		{
	// 			delete robot;
	// 			std::cout << BRED << e.what() << std::endl << RESET;
	// 			return 1;
	// 		}
			
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << BRED << e.what() << std::endl << RESET;
	// 	}	
	// delete robot;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << BRED << e.what() << std::endl << RESET;
	// 	return 1;
	// }
	
	try
	{
		PresidentialPardonForm* prez = new PresidentialPardonForm("prez");
		try
		{
			Bureaucrat lena("lena", 5); //138
			std::cout << "before beSigned: " << std::endl;
			std::cout << std::endl << *prez << std::endl;
			try
			{
				prez->beSigned(lena);
				std::cout << "after beSigned: " << std::endl;
				std::cout << std::endl << *prez << std::endl;
				try
				{
					prez->execute(lena);
					//prez->execute(lena);
				}
				catch(const std::exception& e)
				{
					delete prez;
					std::cout << BRED << e.what() << std::endl << RESET;
					return 1;
				}
				
			}
			catch(const std::exception& e)
			{
				delete prez;
				std::cout << BRED << e.what() << std::endl << RESET;
				return 1;
			}
			
		}
		catch(const std::exception& e)
		{
			std::cout << BRED << e.what() << std::endl << RESET;
		}	
	delete prez;
	}
	catch(const std::exception& e)
	{
		std::cout << BRED << e.what() << std::endl << RESET;
		return 1;
	}
	return (0);
}
