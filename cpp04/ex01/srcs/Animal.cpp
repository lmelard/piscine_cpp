/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:44:09 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/03 18:03:38 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("")
{
	std::cout << PURPLE;
	std::cout << "Animal default constructor called" << std::endl;
	std::cout << RESET;
	return ;
}

Animal::Animal(Animal const & src) : _type("")
{
	std::cout << PURPLE;
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	std::cout << RESET;
	return ;
}

Animal::~Animal(void)
{
	std::cout << PURPLE;
	std::cout << "Animal default destructor called" << std::endl;
	std::cout << RESET;
	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound(void) const
{
	std::cout << PURPLE;
	std::cout << "the sound of silence" << std::endl;
	std::cout << RESET;
	return;
}