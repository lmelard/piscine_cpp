/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:09:46 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/06 17:44:15 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_first_name);
}

std::string Contact::getLastName(void) const
{
	return (this->_last_name);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->_darkest_secret);
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->_phone_number);
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
	this->_first_name = input;
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
	this->_last_name = input;
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
	this->_nickname = input;
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
			for (size_t i = 0; i < input.length(); i++)
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
	this->_phone_number = input;
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
	this->_darkest_secret = input;
	input = "";
	std::cout << std::endl;
	return (0);
}

