/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:09:40 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 16:47:23 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
		ShrubberyCreationForm shrub("shrub");
		//Bureaucrat lena("lena", 3);
	}
	catch(const std::exception& e)
	{
		std::cout << BRED << e.what() << std::endl << RESET;
	}
	
	return (0);
}
