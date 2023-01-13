/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:23:53 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/13 15:42:43 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "error: program takes 3 params: 1. filename 2. a string s1 3. a string s2" << std::endl;
		return (1);
	}
	std::string	file = argv[1];
	std::string program = argv[0];
	std::ifstream	ifs(argv[1]); //input filestream
	std::cout << argv[0] << std::endl;
	std::cout << argv[1] << std::endl;
	if (file.compare(program) == 0 || !ifs)
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
	std::string	s1 = argv[2];
	std::string s2 = argv[3];
	size_t	pos = 0;
	while (std::getline(ifs, line))
	{
		if (pos != 0)
			ofs << std::endl;
		//std::cout << line << std::endl;
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		ofs << line;
	}
	ifs.close();
	ofs.close();
	return (0);
}