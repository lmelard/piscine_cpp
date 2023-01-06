/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:53:53 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/06 17:59:47 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	int			index;

	index = 0;
	while (1)
	{
		std::cout << "enter command: ADD | SEARCH | EXIT : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "exit" << std::endl;
			return (1);
		}
		if (input == "ADD")
		{
			//std::cout << "index: " << index << std::endl;
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
		{
			if (phonebook.countContacts())
			{
				phonebook.printTab();
			//	std::cout << "fin printtab" << std::endl;
				if (phonebook.printContacts() == 1)
				{
					std::cout << "exit" << std::endl;
					return (1);
				}
			}
			else
				std::cout << "You have no contact" << std::endl;
		}
	}
	return (0);
}
