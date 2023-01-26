/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:00:53 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/26 12:16:34 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int	N;

	N = 2;
	horde = zombieHorde(N, "lenaaaa");
	if (!horde) {
		std::cout << "Zombie error" << std::endl;
		return (1);
	}
	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}