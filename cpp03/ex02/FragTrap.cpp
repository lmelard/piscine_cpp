/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:47:04 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/31 20:53:57 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << CYAN;
	std::cout << "FragTrap " << this->_name << " default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDammage = 30;
	std::cout << RESET;
	return ;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << CYAN;
	std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDammage = 30;
	std::cout << RESET;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << CYAN;
	std::cout << "FragTrap " << this->_name << " copy constructor called" << std::endl;
	*this = src;
	std::cout << RESET;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << CYAN;
	std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
	std::cout << RESET;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap " << rhs._name << " copy assignment operator called" << std::endl;
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << BGREEN;
	std::cout << "FragTrap " << this->_name << ": give me high fives !!!!!" << std::endl;
	std::cout << RESET;
	return ;
}

void	FragTrap::printFragTrapInfo(void) const
{
	std::cout << std::endl;
	std::cout << "FragTrap name: " << this->_name << std::endl;
	std::cout << "Hit points: " << this->_hitPoints << std::endl;
	std::cout << "Energy points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_attackDammage << std::endl;
	std::cout << std::endl;
}