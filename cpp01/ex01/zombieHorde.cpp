/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenamelard <lenamelard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:22:21 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/11 16:40:46 by lenamelard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde;

	if (N <= 0 )
		return (NULL);
	horde = new Zombie[N];
	if (!horde)
		return (NULL);
	for (int i = 0; i < N; i++){
		horde[N].setName(name);
	}
	return (horde);
}