/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:20:23 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/02 16:12:35 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	this->_type = "Dog";
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Default Dog destructor called" << std::endl;
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
	std::cout << "wooooooof" << std::endl;
	return;
}