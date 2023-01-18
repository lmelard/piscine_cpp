/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:05:36 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/18 15:37:56 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl lena;
	if (argc == 2)
	{
		std::string level = argv[1];
		lena.complain(level);
		return (0);
	}
	std::cout << "error: you must tell Harl what's going on!" << std::endl;
	return (1);
}