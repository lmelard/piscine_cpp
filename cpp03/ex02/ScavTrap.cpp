/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:46:37 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/31 20:28:28 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << CYAN;
	std::cout << "ScavTrap " << this->_name << " default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDammage = 20;
	std::cout << RESET;
	return ;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	std::cout << CYAN;
	std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDammage = 20;
	std::cout << RESET;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << CYAN;
	std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
	*this = src;
	std::cout << RESET;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << CYAN;
	std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
	std::cout << RESET;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap " << rhs._name << " copy assignment operator called" << std::endl;
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << BGREEN;
	std::cout << "ScavTrap " << this->_name << " entered Gate keeper mode" << std::endl;
	std::cout << RESET;
	return ;
}

void	ScavTrap::printScavTrapInfo(void) const
{
	std::cout << std::endl;
	std::cout << "ScavTrap name: " << this->_name << std::endl;
	std::cout << "Hit points: " << this->_hitPoints << std::endl;
	std::cout << "Energy points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_attackDammage << std::endl;
	std::cout << std::endl;
}