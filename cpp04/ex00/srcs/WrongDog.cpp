/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:42:26 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/03 17:08:15 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
	std::cout << "WrongDog default constructor called" << std::endl;
	this->_type = "WrongDog";
	return ;
}

WrongDog::WrongDog(WrongDog const & src) : WrongAnimal(src)
{
	std::cout << "WrongDog copy constructor called" << std::endl;
	*this = src;
	this->_type = "WrongDog";
	return ;
}

WrongDog::~WrongDog(void)
{
	std::cout << "Default WrongDog destructor called" << std::endl;
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
	std::cout << "wooooooof" << std::endl;
	return;
}
