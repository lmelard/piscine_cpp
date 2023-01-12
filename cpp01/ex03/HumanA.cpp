/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:33:17 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/12 15:08:36 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon type) : _name(name), _type(type)
{
	std::cout << "HumanAconstructor called" << std::endl;
	this->setName(name);
	this->setWeapon(type);
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
	return ;
}

/* Utilisation d'une reference car on passe directement une arme en parametre */ 

void	HumanA::setWeapon(Weapon type)
{
	this->_type = type;
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->_name << "attacks with their " << this->_type.getType();
	return ;
}
