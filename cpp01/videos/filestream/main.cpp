/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:55:42 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/09 18:02:42 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main()
{
	std::ifstream	ifs("numbers"); //input filstrean
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;
	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	//---------------------------

	std::ofstream	ofs("test.out");

	ofs << "coucou cest moi" << std::endl;
	ofs.close();
}

//istringstream;
//ostringstream;