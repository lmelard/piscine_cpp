/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:26:10 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/21 19:15:27 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char)(std::toupper(argv[i][j]));
				j++;
			}
			if (i != argc - 1)
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
