/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:17:15 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/13 18:10:50 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) 
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

int	PhoneBook::setContact(int index)
{
	Contact	contact;

//	std::cout << "debut fonction Phonebook::setcontact" <<std::endl;
	if (contact.setContact())
		return (1);
	this->_Contact[index] = contact;
	return (0);
}

Contact	PhoneBook::getContact(int index) const
{
	return (this->_Contact[index]);
}

int	PhoneBook::printContacts(void) const
{
	Contact			contact;
	int			i = 0;
	std::string		input;

	while (1)
	{
		while (input == "")
		{
			std::cout << std::endl << "select your contact index: ";
			std::getline(std::cin, input);
			if (std::cin.eof())
				return (1);
			if (input == "")
				std::cout << "this field can't be empty !";
		}
		std::stringstream ss(input);
		int x = 0;
		if (ss >> x && input.find('.') == std::string::npos && x > 0 && x <= this->countContacts())
		{
			std::cout << std::endl;
			contact = this->_Contact[x - 1];
			std::cout << "index: " << x << std::endl;
			std::cout << "first name: " << contact.getFirstName() << std::endl;
			std::cout << "last name: " << contact.getLastName() << std::endl;
			std::cout << "nickname: " << contact.getNickname() << std::endl;
			std::cout << "phone number: " << contact.getPhoneNumber() << std::endl;
			std::cout << "darkest secret: " << contact.getDarkestSecret() << std::endl << std::endl;
			return (0);
		}
		else
		{
			std::cout << "invalid input, the index must be a digit between 1 and " << this->countContacts();
			i = 0;
			input = "";
		}
	}
	return (0);
}

void	PhoneBook::printTab(void) const
{
	Contact	contact;
	std::string	output;
	std::cout << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << std::setw(10) << std::right << "INDEX" << "|";
	std::cout << std::setw(10) << std::right << "FIRST NAME" << "|";
	std::cout << std::setw(10) << std::right << "LAST NAME" << "|";
	std::cout << std::setw(10) << std::right << "NICKNAME" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	for	(int i = 0; i < 8 && this->_Contact[i].getFirstName() != ""; i++)
	{
		contact = this->_Contact[i];
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

int	PhoneBook::countContacts(void) const
{
	int	i = 0;
	while (i < 8 && this->_Contact[i].getFirstName() != "")
		i++;
	return (i);
}
