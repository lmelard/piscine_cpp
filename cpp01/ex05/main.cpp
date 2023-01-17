/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:05:36 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/17 18:14:33 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* Utiliser switch ! et switch off ! */

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		enum msg {DEBUG, INFO, WARNING, ERROR};
		switch (DEBUG)
		{
			
		}
		return (0);
	}
	std::cout << "error: you must tell Harl what's going on!" << std::endl;
	return (1);
}