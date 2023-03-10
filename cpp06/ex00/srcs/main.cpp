/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:30:09 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/11 12:02:41 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string	arg = av[1];
		Scalar scalar(arg);
		scalar.idType();
		scalar.convert();
	}
	else
		std::cout << "the program takes 1 argument" << std::endl;
	return (0);
}