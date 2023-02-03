/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:42:26 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/03 20:05:46 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
	std::cout << GREEN;
	std::cout << "WrongDog default constructor called" << std::endl;
	this->_type = "WrongDog";
	std::cout << RESET;
	return ;
}

WrongDog::WrongDog(WrongDog const & src) : WrongAnimal(src)
{
	std::cout << GREEN;
	std::cout << "WrongDog copy constructor called" << std::endl;
	*this = src;
	this->_type = "WrongDog";
	std::cout << RESET;
	return ;
}

WrongDog::~WrongDog(void)
{
	std::cout << GREEN;
	std::cout << "Default WrongDog destructor called" << std::endl;
	std::cout << RESET;
	return ;
}

WrongDog	& WrongDog::operator=(WrongDog const & rhs)
{
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return(*this);
}

void WrongDog::makeSound(void) const
{
	std::cout << GREEN;
	std::cout << "wooooooof" << std::endl;
	std::cout << RESET;
	return;
}
