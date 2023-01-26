/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:53:40 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/26 12:09:20 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie("Archi");
	zombie.announce();
	Zombie	*ptr = newZombie("Lena");
	ptr->announce();
	randomChump("tinyChris");
	delete ptr;
	return (0);
}