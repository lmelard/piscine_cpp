/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenamelard <lenamelard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:56:55 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/11 17:22:52 by lenamelard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Adresse de la string en mémoire: " << &str << std::endl;
	std::cout << "Adresse stockée dans stringPTR: " << stringPTR << std::endl;
	std::cout << "Adresse stockée dans stringREF: " << &stringREF << std::endl;
	
	std::cout << "Valeur de la string: " << str << std::endl;
	std::cout << "Valeur de la string pointée par stringPTR: " << *stringPTR << std::endl;
	std::cout << "Valeur pointée par string ref: " << stringREF << std::endl;
	
	return (0);
}
