/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:46:49 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/31 20:30:43 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	//ClapTrap robot("robot");
	ScavTrap lena("lena");
	lena.printScavTrapInfo();
	// robot.guardGate(); // doesn't compile
	lena.guardGate();
	
	/* COPY CONSTRUCTOR */

	// ScavTrap	chris(lena);
	// ScavTrap	lea;
	// lea = chris;
	// lena.printScavTrapInfo();
	// chris.printScavTrapInfo();
	// lea.printScavTrapInfo();
	
	// /* FIRST TEST DEATH*/
	
	lena.takeDamage(6);
	lena.printScavTrapInfo();
	
	lena.beRepaired(4);
	lena.printScavTrapInfo();

	lena.attack("christel");
	lena.printScavTrapInfo();
	lena.guardGate();
	
	lena.takeDamage(8);
	lena.printScavTrapInfo();
	
	lena.beRepaired(4);
	lena.printScavTrapInfo();
	
	lena.attack("christel");
	lena.printScavTrapInfo();

	/* SECOND TEST ENERGY */

	// for (int i = 0; i < 51; i++)
	// {
	// 	lena.attack("christel");
	// 	lena.printScavTrapInfo();
	// }
	return (0);
}