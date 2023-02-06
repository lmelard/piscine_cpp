/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:44:09 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/06 16:49:53 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << PURPLE;
	std::cout << "Animal default constructor called" << std::endl;
	this->_type = "";
	std::cout << RESET;
	return ;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << PURPLE;
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	std::cout << RESET;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << PURPLE;
	std::cout << "Animal default destructor called" << std::endl;
	std::cout << RESET;
	return ;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
