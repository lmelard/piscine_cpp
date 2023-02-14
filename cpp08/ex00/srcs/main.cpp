/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:22:25 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/14 15:59:43 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

/* container = holder object qui stocke une collection d'autres objets 
Ils sontimplementes comme des templates de classes ce qui permet une grande 
flexibilite sur le types d'elements supportes

Le container gere l'espace memoire pour ses elements et offre des fonctions membres
pour y acceder directement ou grace a des iterateurs*/

int	main(void)
{
	{
		std::vector<int> v;

		v.push_back(5);
		v.push_back(45);
		v.push_back(2);
		v.push_back(56);
		v.push_back(2);
		v.push_back(5);
		
		try
		{
			std::cout << "value found: " << *easyfind(v, 56) << std::endl;
			std::cout << "value found: " << *easyfind(v, 5) << std::endl;
			std::cout << "value found: " << *easyfind(v, -4562) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	
	std::list<int> l;

	l.push_back(55);
	l.push_back(12);
	l.push_back(98);
	l.push_back(-89556);
	l.push_back(-0);
	l.push_back(98);
	
	try
	{
		std::cout << "value found: " << *easyfind(l, -89556) << std::endl;
		std::cout << "value found: " << *easyfind(l, 12) << std::endl;
		std::cout << "value found: " << *easyfind(l, -2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}