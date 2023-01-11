/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenamelard <lenamelard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:33:29 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/11 18:07:12 by lenamelard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string& const Weapon::getType(void)
{
	std::string& type = this->_type;
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
