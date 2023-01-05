/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:17:15 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/05 17:16:21 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

PhoneBook::PhoneBook(void) 
{
//	std::cout << "Constructor PhoneBook called" <<std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
//	std::cout << "Destructor PhoneBook called" <<std::endl;
	return;
}

int	PhoneBook::setContact(int index)
{
	Contact	contact;

	if (contact.setContact())
		return (1);
	//std::cout << "avant assignation" << std::endl;
	this->_contact[index] = contact;
	//std::cout << "apres assignation" << std::endl;
	return (0);
}

Contact	PhoneBook::getContact(int index) const
{
	return (this->_contact[index]);
}

void	PhoneBook::printContacts(void) const
{
	Contact			contact;
	size_t			i = 0;

	while (1)
	{
		std::cout << std::endl << "select your contact index: ";
		std::cin >> i;
		if (std::cin.fail() || i <= 0 || i > this->countContacts())
		{
			std::cout << "invalid input, the index must be a digit between 1 and " << this->countContacts();
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			contact = this->_contact[i - 1];
			std::cout << "index: " << i << std::endl;
			std::cout << "first name: " << contact.getFirstName() << std::endl;
			std::cout << "last name: " << contact.getLastName() << std::endl;
			std::cout << "nickname: " << contact.getNickname() << std::endl;
			std::cout << "darkest secret: " << contact.getDarkestSecret() << std::endl;
			return ;
		}
	}
	return ;
}

void	PhoneBook::printTab(void) const
{
	Contact	contact;
	std::string	output;
	std::cout << std::endl;
	for	(size_t	i = 0; this->_contact[i].getFirstName() != "" && i < 8; i++)
	{
		contact = this->_contact[i];
		std::cout << std::setw(10) << std::right << i + 1 << "|";
		if (contact.getFirstName().size() > 10)
			output = contact.getFirstName().substr(0, 9) + ".";
		else
			output = contact.getFirstName();
		std::cout << std::setw(10) << std::right << output << "|";
		if (contact.getLastName().size() > 10)
			output = contact.getLastName().substr(0, 9) + ".";
		else
			output = contact.getLastName();
		std::cout << std::setw(10) << std::right << output << "|";
		if (contact.getNickname().size() > 10)
			output = contact.getNickname().substr(0, 9) + ".";
		else
			output = contact.getNickname();
		std::cout << std::setw(10) << std::right << output << std::endl;
	}
	return;
}

size_t	PhoneBook::countContacts(void) const
{
	size_t	i = 0;
	while (this->_contact[i].getFirstName() != "")
		i++;
	return (i);
}