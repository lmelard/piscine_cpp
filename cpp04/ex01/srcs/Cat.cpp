/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:21:09 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/03 18:10:10 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << CYAN;
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	std::cout << RESET;
	return ;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << CYAN;
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	this->_type = "Cat";
	std::cout << RESET;
	return ;
}

Cat::~Cat(void)
{
	std::cout << CYAN;
	std::cout << "Cat default destructor called" << std::endl;
	std::cout << RESET;
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
	std::cout << CYAN;
	std::cout << "miaouuuuu" << std::endl;
	std::cout << RESET;
	return;
}