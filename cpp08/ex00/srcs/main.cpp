/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:22:25 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/13 14:44:08 by lmelard          ###   ########.fr       */
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
	std::vector<int> v;
	std::vector<int>::iterator itr;

	v.push_back(0);
	v.push_back(45);
	v.push_back(2);
	v.push_back(56);
	v.push_back(-1212);
	v.push_back(5);
	
	try
	{
		itr = easyfind(v, 56);
		std::cout << "value found: " << *itr << std::endl;
		std::cout << "index of the element: " << std::distance(v.begin(), itr) << std::endl;
		itr = easyfind(v, -1212);
		std::cout << "value found: " << *itr << std::endl;
		std::cout << "index of the element: " << std::distance(v.begin(), itr) << std::endl;
		itr = easyfind(v, 89);
		std::cout << "value found: " << *itr << std::endl;
		std::cout << "index of the element: " << std::distance(v.begin(), itr) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	std::list<int> l;
	std::list<int>::iterator i;

	l.push_back(55);
	l.push_back(12);
	l.push_back(98);
	l.push_back(-89556);
	l.push_back(-0);
	l.push_back(98);
	
	try
	{
		i = easyfind(l, 0);
		std::cout << "value found: " << *i << std::endl;
		std::cout << "index of the element: " << std::distance(l.begin(), i) << std::endl;
		i = easyfind(l, -1212);
		std::cout << "value found: " << *i << std::endl;
		std::cout << "index of the element: " << std::distance(l.begin(), i) << std::endl;
		i = easyfind(l, 89);
		std::cout << "value found: " << *i << std::endl;
		std::cout << "index of the element: " << std::distance(l.begin(), i) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}