/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenamelard <lenamelard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:00:53 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/11 16:42:03 by lenamelard       ###   ########.fr       */
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
		horde[N].announce();
	}
	delete [] horde;
	return (0);
}