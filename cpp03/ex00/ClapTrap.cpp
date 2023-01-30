/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:45:58 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/30 18:42:59 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
	std::cout << "constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_attackDammage = rhs._attackDammage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
		this->_name = rhs._name;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	this->_energyPoints -= 1;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int j = 0;
	this->_hitPoints -= amount;
	if (j <= 0)
	{
		std::count << "Hit points = 0, you are dead" << std::endl;
		this->_hitPoints = 0;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
	return ;
}
