/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:17:15 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/05 15:10:00 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

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

void	PhoneBook::printContacts(void)
{
	Contact	contact;
	size_t	i;

	std::cout << std::endl << "select your contact index: ";
	std::cin >> i;
	contact = this->_contact[i - 1];
	std::cout << "index: " << i << std::endl;
	std::cout << "first name: " << contact.getFirstName() << std::endl;
	std::cout << "last name: " << contact.getLastName() << std::endl;
	std::cout << "nickname: " << contact.getNickname() << std::endl;
	std::cout << "darkest secret: " <<contact.getDarkestSecret() << std::endl;
}

void	PhoneBook::printTab(void)
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
