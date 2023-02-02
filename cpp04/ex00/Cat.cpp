/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:21:09 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/02 16:17:57 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	*this = src;
	this->_type = "Cat";
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Default Cat destructor called" << std::endl;
	return ;
}

Cat	& Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return(*this);
}

void Cat::makeSound(void) const
{
	std::cout << "miaouuuuu" << std::endl;
	return;
}