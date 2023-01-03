/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:17:15 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/03 17:43:53 by lmelard          ###   ########.fr       */
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

// void	PhoneBook::setContact(Contact *contact)
// {
// 	(void)contact;
// 	return;
// }
