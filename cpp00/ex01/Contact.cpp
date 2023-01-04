/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:09:46 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/04 17:45:30 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

Contact::Contact(void)
{
	std::cout << "Constructor Contact called" << std::endl;
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
	return;
}

Contact::~Contact(void)
{
	std::cout << "Destructor Contact called" << std::endl;
	return;
}

int	Contact::setContact(void)
{
	std::string	input;

	std::cout << "enter first name: ";
	std::cin >> input;
	if (std::cin.eof())
		return (1);
	this->_first_name = input;
	std::cout << "enter last name: ";
	std::cin >> input;
	this->_last_name = input;
	std::cout << "enter nickname: ";
	std::cin >> input;
	this->_nickname = input;
	std::cout << "enter phone number: ";
	std::cin >> input;
	this->_phone_number = input;
	std::cout << "enter darkest secret: ";
	std::cin >> input;
	this->_darkest_secret = input;
	std::cout << this->_nickname << std::endl;
	input = "";
	return (0);
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