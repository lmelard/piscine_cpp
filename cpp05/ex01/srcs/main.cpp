/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:09:40 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 14:13:20 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	/*
	**	Si aucune exception n'est levée (lancée) dans le bloc de code protégé 
	**	par un bloc try, alors le bloc catch associé n'est pas exécuté
	**	et le programme continue son exécution normalement après le bloc try.
	*/

	/* SIGNED FORM */
	
	try
	{
		Form impots("impots", false, 5, 65);
		std::cout << std::endl << impots << std::endl;
		Bureaucrat billy("billy", 5);
		std::cout << std::endl;
		std::cout << billy << std::endl;
		billy.signForm(impots);
		std::cout << std::endl << impots << std::endl << std::endl;
		
		/* COPY CONSTRUCTOR */
		Form tax(impots);
		std::cout << std::endl << tax << std::endl;
		tax.setSign(false);
		std::cout << std::endl << tax << std::endl;
		Bureaucrat charles("charles", 9);
		charles.signForm(tax);
		std::cout << std::endl << impots << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << BRED << e.what() << std::endl << RESET;
	}

	/* INVALID PARAMETERS */
	
	// try
	// {
	// 	//Form impots("impots", false, 151, 65);
	// 	Form impots("impots", false, 150, 0);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << BRED << e.what() << std::endl << RESET;
	// }
	
	return (0);
}
