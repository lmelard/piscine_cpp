/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:20:23 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/03 20:07:20 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << GREEN;
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	std::cout << RESET;
	return ;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << GREEN;
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	this->_type = "Dog";
	std::cout << RESET;
	return ;
}

Dog::~Dog(void)
{
	std::cout << GREEN;
	std::cout << "Dog default destructor called" << std::endl;
	std::cout << RESET;
	return ;
}

Dog	& Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return(*this);
}

void Dog::makeSound(void) const
{
	std::cout << GREEN;
	std::cout << "wooooooof" << std::endl;
	std::cout << RESET;
	return;
}