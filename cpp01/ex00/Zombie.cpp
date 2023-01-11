/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenamelard <lenamelard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:38:02 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/11 14:20:10 by lenamelard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//#include <iostream>

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "constructor called" << std::endl;
	//this->announce();
	return ;
}

Zombie::~Zombie()
{
	std::cout << "destructor called for " << this->_name << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
