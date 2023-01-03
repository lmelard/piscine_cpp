/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:09:46 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/03 17:39:05 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

Contact::Contact(void)
{
	std::cout << "Constructor Contact called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Destructor Contact called" << std::endl;
	return;
}