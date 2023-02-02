/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:46:49 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/02 13:29:05 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	//ClapTrap robot("robot");
	FragTrap lena("lena");
	lena.printFragTrapInfo();
	// robot.guardGate(); // doesn't compile
	// lena.guardGate(); // doesn't compile
	lena.highFivesGuys();
	
	/* COPY CONSTRUCTOR */

	// FragTrap	chris(lena);
	// FragTrap	lea;
	// lea = chris;
	// lena.printFragTrapInfo();
	// chris.printFragTrapInfo();
	// lea.printFragTrapInfo();
	
	/* FIRST TEST DEATH*/
	
	lena.takeDamage(6);
	lena.printFragTrapInfo();
	
	lena.beRepaired(4);
	lena.printFragTrapInfo();

	lena.attack("christel");
	lena.printFragTrapInfo();
	lena.highFivesGuys();
	
	lena.takeDamage(8);
	lena.printFragTrapInfo();
	
	lena.beRepaired(4);
	lena.printFragTrapInfo();
	
	lena.attack("christel");
	lena.printFragTrapInfo();

	/* SECOND TEST ENERGY */

	// for (int i = 0; i < 100; i++)
	// {
	// 	lena.attack("christel");
	// 	lena.printFragTrapInfo();
	// }
	// lena.highFivesGuys();
	
	return (0);
}