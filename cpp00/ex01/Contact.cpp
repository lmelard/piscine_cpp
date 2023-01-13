/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:09:46 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/13 17:33:27 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
	this->_FirstName = "";
	this->_LastName = "";
	this->_Nickname = "";
	this->_PhoneNumber = "";
	this->_DarkestSecret = "";
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_FirstName);
}

std::string Contact::getLastName(void) const
{
	return (this->_LastName);
}

std::string	Contact::getNickname(void) const
{
	return (this->_Nickname);
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->_DarkestSecret);
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->_PhoneNumber);
}

int	Contact::setContact(void)
{
	std::string	input;
	int			check = 0;
	std::cout << std::endl;
	while (input == "")
	{
		std::cout << "enter first name: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		if (input == "")
			std::cout << "this field can't be empty !" << std::endl;
	}
	this->_FirstName = input;
	input = "";
	while (input == "")
	{
		std::cout << "enter last name: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		if (input == "")
			std::cout << "this field can't be empty !" << std::endl;
	}
	this->_LastName = input;
	input = "";
	while (input == "")
	{
		std::cout << "enter nickname: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		if (input == "")
			std::cout << "this field can't be empty !" << std::endl;
	}
	this->_Nickname = input;
	input = "";
	while (input == "")
	{
		std::cout << "enter phone number: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		if (input == "")
			std::cout << "this field can't be empty !" << std::endl;
		else
		{
			int	len = input.length();
			for (int i = 0; i < len; i++)
			{
				if (!std::isdigit(input[i]))
				{
					check = 1;
					break;
				}
			}
			if (check == 1)
			{
				std::cout << "digits only !" << std::endl;
				input = "";
				check = 0;
			}
		}
	}
	this->_PhoneNumber = input;
	input = "";
	while (input == "")
	{
		std::cout << "enter darkest secret: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		if (input == "")
			std::cout << "this field can't be empty !" << std::endl;
	}
	this->_DarkestSecret = input;
	input = "";
	std::cout << std::endl;
	return (0);
}

