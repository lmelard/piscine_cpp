/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:17:15 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/04 17:28:16 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) 
{
	std::cout << "Constructor PhoneBook called" <<std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor PhoneBook called" <<std::endl;
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
	for (size_t i = 0; i < 8; i++)
	{
		contact = this->_contact[i];
		std::cout << "index: " << i + 1 << std::endl;
		std::cout << "first name: " << contact.getFirstName() << std::endl;
		std::cout << "last name: " << contact.getLastName() << std::endl;
		std::cout << "nickname: " << contact.getNickname() << std::endl;
	}
	
}