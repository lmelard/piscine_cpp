/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:30:09 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/09 21:07:39 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Scalar.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string	arg = av[1];
		Scalar scalar(arg);
	}
	else
		std::cout << "the program takes 1 argument" << std::endl;
	return (0);
}