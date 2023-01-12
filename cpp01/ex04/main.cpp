/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:23:53 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/12 17:32:48 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

// Fonction replace interdite //
// Quid de l'ordre // 

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "error: program takes 3 params: 1. filename 2. a string s1 3. a string s2" << std::endl;
		return (1);
	}
	std::string	file;
	file = argv[1];
	std::ifstream	ifs(argv[1]); //input filestream
	if (!ifs)
	{
		std::cout << "error: could not open input file" << std::endl;
		return (1);
	}
	std::ofstream	ofs((file + ".replace").c_str());
	if (!ofs)
	{
		std::cout << "error: could not open output file" << std::endl;
		return (1);
	}
	std::string	line;
	while (std::getline(ifs, line))
	{
		std::cout << line <<std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}