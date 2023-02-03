/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:22:06 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/03 18:05:23 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("")
{
	std::cout << PURPLE;
	std::cout << "WrongAnimal default constructor called" << std::endl;
	std::cout << RESET;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) : _type("")
{
	std::cout << PURPLE;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	std::cout << RESET;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << PURPLE;
	std::cout << "WrongAnimal default destructor called" << std::endl;
	std::cout << RESET;
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << PURPLE;
	std::cout << "the sound of silence" << std::endl;
	std::cout << RESET;
	return;
}