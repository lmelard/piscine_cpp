/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:36:11 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/01 11:51:21 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
	std::cout << PURPLE;
	std::cout << "ClapTrap default constructor called" << std::endl;
	std::cout << RESET;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
	std::cout << PURPLE;
	std::cout << "ClapTrap " << this->_name << " constructor called" << std::endl;
	std::cout << RESET;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << PURPLE;
	std::cout << "ClapTrap " << src._name << " copy constructor called" << std::endl;
	*this = src; 
	std::cout << RESET;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << PURPLE;
	std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
	std::cout << RESET;
	return ;
}

void	ClapTrap::setAttackDammage(int const attackDammage)
{
	this->_attackDammage = attackDammage;
	return ;
}

void	ClapTrap::setEnergyPoints(int const energyPoints)
{
	this->_energyPoints = energyPoints;
	return ;
}

void	ClapTrap::setHitPoints(int const hitPoints)
{
	this->_hitPoints = hitPoints;
	return ;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDammage(void) const
{
	return (this->_attackDammage);
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap " << rhs._name << " copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_attackDammage = rhs._attackDammage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
		this->_name = rhs._name;
	}
	return (*this);
}

void	ClapTrap::printClapTrapInfo(void) const
{
	std::cout << std::endl;
	std::cout << "ClapTrap name: " << this->_name << std::endl;
	std::cout << "Hit points: " << this->_hitPoints << std::endl;
	std::cout << "Energy points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_attackDammage << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << BYELLOW;
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " cannot attack " << target << " it is dead" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " doesn't have enough energy to attack " << target << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDammage << " points of damage !" << std::endl;
	}
	std::cout << RESET;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << BRED << "Attack! ";
	if (this->_hitPoints <= 0)
		std::cout << "But " << this->_name << " is already dead" << std::endl;
	else
	{
		this->_hitPoints -= amount;
		if (this->_hitPoints <= 0)
		{
			std::cout << this->_name << " died" << std::endl;
			this->_hitPoints = 0;
		}
		else
			std::cout << this->_name << " lost " << amount << " hit points" << std::endl;
	}
	std::cout << RESET;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << BBLUE << "Repair! ";
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " cannot repair it is already dead" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " doesn't have enough energy to repair" << std::endl;
	else
	{
		std::cout << this->_name << " gets " << amount << " hit points" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
	std::cout << RESET;
	return ;
}
