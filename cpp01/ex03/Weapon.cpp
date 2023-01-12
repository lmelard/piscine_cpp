/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:33:29 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/12 15:29:18 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//Weapon::Weapon(std::string type)
Weapon::Weapon(std::string type)
{
	this->setType(type);
	return ;
}

Weapon::Weapon(void)
{
	std::cout << "default construtor" << std::endl;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string& Weapon::getType(void)
{
	std::string& type = this->_type;
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
