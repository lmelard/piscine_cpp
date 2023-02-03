/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:39:00 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/03 18:12:55 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << CYAN;
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->_type = "WrongCat";
	std::cout << RESET;
	return ;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << CYAN;
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	this->_type = "WrongCat";
	std::cout << RESET;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << CYAN;
	std::cout << "WrongCat default destructor called" << std::endl;
	std::cout << RESET;
	return ;
}

WrongCat	& WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return(*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << CYAN;
	std::cout << "miaouuuuu" << std::endl;
	std::cout << RESET;
	return;
}