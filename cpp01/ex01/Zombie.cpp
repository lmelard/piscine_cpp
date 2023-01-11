/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenamelard <lenamelard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:18:14 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/11 16:35:28 by lenamelard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "constructor called" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "destructor called" << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
