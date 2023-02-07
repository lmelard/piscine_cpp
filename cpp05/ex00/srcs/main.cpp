/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:09:40 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/07 19:30:52 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	/*
	**	Si aucune exception n'est levée (lancée) dans le bloc de code protégé 
	**	par un bloc try, alors le bloc catch associé n'est pas exécuté
	**	et le programme continue son exécution normalement après le bloc try.
	*/
	
	// try
	// {
	// 	/* GRADE TOO HIGH EXCEPTION */
		
	// 	// Bureaucrat lena("lena", 1);
	// 	// std::cout << lena;
	// 	// lena.increaseGrade(); // Grade too high exception
	// 	// std::cout << lena;

	// 	/* INCREASE / DECREASE GRADE */
		
	// 	// Bureaucrat lena("lena", 26);
	// 	// std::cout << lena;
	// 	// lena.increaseGrade();
	// 	// std::cout << lena;
	// 	// lena.increaseGrade();
	// 	// std::cout << lena;
	// 	// lena.decreaseGrade();
	// 	// std::cout << lena;

	// 	/* ASSIGNMENT */
		
	// 	// Bureaucrat lena("lena", 28);
	// 	// Bureaucrat chris("chris", 8);
	// 	// std::cout << std::endl << lena;
	// 	// std::cout << chris;
	// 	// chris = lena;
	// 	// std::cout << lena;
	// 	// std::cout << chris << std::endl;

	// 	/* COPY CONSTRUCTOR + ASSIGNMENT + EXCEPTION */

	// 	Bureaucrat lena("lena", 1);
	// 	Bureaucrat chris(lena);
	// 	Bureaucrat archi("archi", 45);
	// 	std::cout << BBLUE << lena << RESET;
	// 	std::cout << BYELLOW << chris << RESET;
	// 	chris.decreaseGrade();
	// 	std::cout << BBLUE << lena << RESET;
	// 	std::cout << BYELLOW << chris << RESET;
	// 	archi = lena;
	// 	std::cout << BRED << archi << RESET;
	// 	archi.increaseGrade();
	// 	std::cout << BRED << archi << RESET;
	// }
	// catch(const Bureaucrat::GradeTooHighException& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch(const Bureaucrat::GradeTooLowException& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }


	try
	{
		Bureaucrat lena("lena", 1);
		Bureaucrat chris(lena);
		Bureaucrat archi("archi", 45);
		std::cout << BBLUE << lena << RESET;
		std::cout << BYELLOW << chris << RESET;
		chris.decreaseGrade();
		std::cout << BBLUE << lena << RESET;
		std::cout << BYELLOW << chris << RESET;
		archi = lena;
		std::cout << BRED << archi << RESET;
		archi.increaseGrade();
		std::cout << BRED << archi << RESET;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
