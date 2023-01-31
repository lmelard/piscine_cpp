/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:41:00 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/31 14:01:29 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	lena("lena");
	lena.setAttackDammage(5);
	lena.printClapTrapInfo();
	
	/* COPY CONSTRUCTOR */

	// ClapTrap	chris(lena);
	// ClapTrap	lea;
	// lea = chris;
	// lena.printClapTrapInfo();
	// chris.printClapTrapInfo();
	// lea.printClapTrapInfo();
	
	/* FIRST TEST DEATH*/
	
	lena.takeDamage(6);
	lena.printClapTrapInfo();
	
	lena.beRepaired(4);
	lena.printClapTrapInfo();

	lena.attack("christel");
	lena.printClapTrapInfo();
	
	lena.takeDamage(8);
	lena.printClapTrapInfo();
	
	lena.beRepaired(4);
	lena.printClapTrapInfo();
	
	lena.attack("christel");
	lena.printClapTrapInfo();

	/* SECOND TEST ENERGY */

	// for (int i = 0; i < 11; i++)
	// {
	// 	lena.attack("christel");
	// 	lena.printClapTrapInfo();
	// }
	
	return (0);
}