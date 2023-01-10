/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reference.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:03:35 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/09 17:47:07 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "refence.hpp"

Student::Student(std::string const	&login) : _login(login)
{
	return;
}

Student::~Student(void)
{
	return;
}

std::string& Student::getLoginRef(void)
{
	return (this->_login);
}

std::string const&	Student::getLoginRefConst() const
{
	return (this->_login);
}

std::string*	Student::getLoginPtr()
{
	return (&(this->_login));
}

std::string const*	Student::getLoginPtrConst() const
{
	return (&(this->_login));
}