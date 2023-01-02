/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:00:17 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/20 18:31:41 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

// les constructeurs et les destructeurs en cpp n'ont pas de type de retour

Sample::Sample(char p1, int p2, float p3)
{
	std::cout << "Constructor called" << std::endl;

	// this est un pointeur qui pointe sur l'instance courante d'ou la fleche
	this->a1 = p1;
	std::cout << "this->a1: " << this->a1 << std::endl;
	this->a2 = p2;
	std::cout << "this->a2: " << this->a2 << std::endl;
	this->a3 = p3;
	std::cout << "this->a3: " << this->a3 << std::endl;
	//en C++ on peut appeler une fonction directement a partir d'un pointeur d'instance
	//this->bar();
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

// void	Sample::bar(void)
// {
// 	std::cout << "Member function bar called" <<std::endl;
// 	return;
// }