/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:20:23 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/06 16:58:56 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << GREEN;
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << RESET;
	return ;
}

Dog::Dog(Dog const & src) : AAnimal(src)
{
	std::cout << GREEN;
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	this->_type = "Dog";
	this->_brain = new Brain(*(src.getBrain()));
	std::cout << RESET;
	return ;
}

Dog::~Dog(void)
{
	std::cout << GREEN;
	std::cout << "Dog default destructor called" << std::endl;
	delete this->_brain;
	std::cout << RESET;
	return ;
}

Dog	& Dog::operator=(Dog const & rhs)
{
	std::cout << GREEN;
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		this->_type = rhs.getType();
		this->_brain = rhs._brain;
	}
	std::cout << RESET;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << GREEN;
	std::cout << "wooooooof" << std::endl;
	std::cout << RESET;
	return ;
}

Brain * Dog::getBrain(void) const
{
	return (this->_brain);
}