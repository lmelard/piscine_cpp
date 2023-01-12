/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:33:22 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/12 14:51:34 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->setName(name);
	this->_type = NULL;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setName(std::string name)
{
	this->_name = name;
	return ;
}

void	HumanB::setWeapon(Weapon type)
{
	this->_type = &type;
	return ;
}