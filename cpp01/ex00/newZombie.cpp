/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:44:52 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/10 16:58:23 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* No memory dynamically allocated for the object. 
** It was created on the stack 
** It does not require freeing memory
*/ 

Zombie *newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name);
	return (newZombie);
}

void	randomChump(std::string name)
{
	Zombie newZombie(name);
	newZombie.announce();
	return ;
}