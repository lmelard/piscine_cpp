/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:53:53 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/04 17:29:38 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// modulo 8 pour re remplir le bon contact

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string.h>

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	int			index;

	index = 0;
	while (1)
	{
		std::cout << "enter command ADD | SEARCH | EXIT : ";
		std::cin >> input;
		if (input == "ADD")
		{
			if (phonebook.setContact(index) == 1)
			{
				std::cout << "Exit" << std::endl;
				return (1);
			}
			index++;
			index = index % 8;
		}
		else if (input == "EXIT")
			return (0);
		else if (input == "SEARCH")
			phonebook.printContacts();
	}
	return (0);
}