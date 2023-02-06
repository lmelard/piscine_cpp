/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:21:09 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/06 16:58:43 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << CYAN;
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << RESET;
	return ;
}

Cat::Cat(Cat const & src) : AAnimal(src)
{
	std::cout << CYAN;
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	this->_type = "Cat";
	this->_brain = new Brain(*(src.getBrain()));
	std::cout << RESET;
	return ;
}

Cat::~Cat(void)
{
	std::cout << CYAN;
	std::cout << "Cat default destructor called" << std::endl;
	delete this->_brain;
	std::cout << RESET;
	return ;
}

Cat	& Cat::operator=(Cat const & rhs)
{
	std::cout << CYAN;
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		this->_type = rhs.getType();
		this->_brain = rhs._brain;
	}
	std::cout << RESET;
	return(*this);
}
void Cat::makeSound(void) const
{
	std::cout << CYAN;
	std::cout << "miaouuuuu" << std::endl;
	std::cout << RESET;
	return;
}

Brain * Cat::getBrain(void) const
{
	return (this->_brain);
}