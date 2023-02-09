/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:44:12 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/09 21:37:04 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(void)
{
	return;
}

Scalar::~Scalar(void)
{
	return ;
}

Scalar::Scalar(std::string const input) : _input(input)
{
	return ;
}

Scalar::Scalar(Scalar const & src)
{
	*this = src;
	return ;
}

Type	Scalar::getType(void) const
{
	return (this->_type);
}

Scalar & Scalar::operator=(Scalar const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
}

bool Scalar::_isChar(void)
{
	std::string str;
	str = this->_input;
	if (str[0] >= 32 && str[0] <=)
}

void	Scalar::idType(void)
{
	if (this->_isChar() == true)
		this->_type = Type::CHAR;
	else if (this->_isDouble() == true)
		this->_type = Type::DOUBLE;
	else if (this->_isInt() == true)
		this->_type = Type::INT;
	return ;
}
