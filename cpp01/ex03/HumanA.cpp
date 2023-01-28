/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:33:17 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/28 18:38:41 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _type(type)
{
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

void	HumanA::setWeapon(Weapon type)
{
	this->_type = type;
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_type.getType() <<std::endl;
	return ;
}
