/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:44:12 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/13 14:26:08 by lmelard          ###   ########.fr       */
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
	return (*this);
}

bool Scalar::_isChar(void)
{
	std::string str;
	str = this->_input;
	if (str[1])
		return false;
	if ((str[0] >= 32 && str[0] <= 47) || (str[0] >= 58 && str[0] <= 126))
		return true;
	return false;
}

bool Scalar::_isDouble(void)
{
	std::string str;
	str = this->_input;
	size_t i = 0;
	size_t	point = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	if (this->isDigit(str[i]) == false)
		return false;
	for (size_t j = i; j < str.size(); j++)
	{
		if (str[j] == '.' && point == 0)
		{
			point += 1;
			this->_coma = j;
		}
		else if (this->isDigit(str[j]) == false)
			break;
		i = j;
	}
	if (point > 1)
		return false;
	if (i == str.size() - 1 && str[i] != '.' && point)
		return true;
	return false;
}

bool Scalar::_isFloat(void)
{
	std::string str;
	str = this->_input;
	size_t i = 0;
	size_t	point = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	if (this->isDigit(str[i]) == false)
		return false;
	for (size_t j = i; j < str.size(); j++)
	{
		if (str[j] == '.' && point == 0)
		{
			point += 1;
			this->_coma = j;
		}
		else if (this->isDigit(str[j]) == false)
			break;
		i = j;
	}
	i++;
	if (point > 1)
		return false;
	if (str[i] == 'f' && i == str.size() - 1 && str[i - 1] != '.')
		return true;
	return false;
}

bool Scalar::_isInt(void)
{
	std::string str;
	str = this->_input;
	size_t i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	for (size_t j = i; i < str.size(); j++)
	{
		if (this->isDigit(str[j]) == false)
			break;
		i = j;
	}
	if (i == str.size() - 1 && this->isDigit(str[i]) == true)
		return true;
	return false;
}

bool	Scalar::isDigit(char c)
{
	if (c >= '0' && c <= '9')
		return true;
	return false;
}

bool	Scalar::_isInf(void)
{
	std::string str = this->_input;
	if (str.compare("-inf") == 0 || str.compare("-inff") == 0 || 
		str.compare("inf") == 0 || str.compare("inff") == 0 || 
		str.compare("nan") == 0 || str.compare("nanf") == 0 ||
		str.compare("+inf") == 0 || str.compare("+inff") == 0)
		return true;
	return false;
}

void	Scalar::idType(void)
{
	if (this->_isInf() == true)
		this->_type = INF;
	else if (this->_isChar() == true)
		this->_type = CHAR;
	else if (this->_isFloat() == true)
		this->_type = FLOAT;
	else if (this->_isDouble() == true)
		this->_type = DOUBLE;
	else if (this->_isInt() == true)
		this->_type = INT;
	return ;
}

void	Scalar::_printCharCase(void)
{
	std::string str = this->_input;
	this->_c = static_cast<char>(str[0]);
	std::cout << "char: " << this->_c << std::endl;
	std::cout << "int: " << static_cast<int>(this->_c) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(this->_c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(this->_c) << std::endl;
	return ;
}

void	Scalar::_printInfCase(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (this->_input.compare("inff") == 0 || this->_input.compare("-inff") == 0 ||
	 	this->_input.compare("nanf") == 0 || this->_input.compare("+inff") == 0)
		{
			std::cout << "float: " << this->_input << std::endl;
			std::string str = this->_input;
			std::cout << "double: " << str.erase((str.size() - 1), 1) << std::endl; 
		}
	else
	{
		std::cout << "float: " << this->_input << "f" << std::endl;
		std::cout << "double: " << this->_input << std::endl;
	}
	return ;
}

void	Scalar::_printFloatCase(void)
{
	std::string str = this->_input;
	this->_value = std::atof(this->_input.c_str());
	if (this->_value < -std::numeric_limits<float>::max() || 
		this->_value > std::numeric_limits<float>::max())
		{
			std::cout << "test" << std::endl;
			this->_printNonDisplayable();
		}
	else
	{
		this->_f = static_cast<float>(this->_value);
		this->_i = static_cast<int>(this->_f);
		if (this->_i < 32 || this->_i >= 126)
			std::cout << "char: " << "Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(this->_i) << "'" << std::endl;
		std::cout << "int: " << this->_i << std::endl;
		std::cout << std::fixed << std::setprecision(str.size() - this->_coma - 2);
		std::cout << "float: " << static_cast<float>(this->_f) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(this->_f) << std::endl;
	}
}

void	Scalar::_printDoubleCase(void)
{
	std::string str = this->_input;
	this->_value = std::atof(this->_input.c_str());
	if (this->_value < -std::numeric_limits<double>::max() ||
		this->_value > std::numeric_limits<double>::max())
		this->_printNonDisplayable();
	else
	{
		this->_d = static_cast<double>(this->_value);
		this->_i = static_cast<int>(this->_d);
		if (this->_i < 32 || this->_i >= 126)
			std::cout << "char: " << "Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(this->_d) << "'" << std::endl;
		this->_li = std::atol((this->_input).c_str());
		if (this->_li < std::numeric_limits<int>::min() || this->_li > std::numeric_limits<int>::max())
			std::cout << "int: Non displayable" << std::endl;
		else
			std::cout << "int: " << this->_i << std::endl;
		std::cout << std::fixed << std::setprecision(str.size() - this->_coma - 1);
		std::cout << "float: " << static_cast<float>(this->_d) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(this->_d) << std::endl;
	}
}
 
void	Scalar::_printIntCase(void)
{
	std::string str = this->_input;
	this->_li = std::atol((this->_input).c_str());
	if (this->_li < std::numeric_limits<int>::min() || this->_li > std::numeric_limits<int>::max())
		this->_printNonDisplayable();
	else
	{
		this->_i = static_cast<int>(this->_li);
		if (this->_i < 32 || this->_i >= 126)
			std::cout << "char: " << "Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(this->_i) << "'" << std::endl;
		std::cout << "int: " << this->_i << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>(this->_i) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(this->_i) << std::endl;
	}
	return ;
}

void	Scalar::_printNonDisplayable(void) const
{
	std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: Non displayable" << std::endl;
	std::cout << "float: Non displayable" << std::endl;
	std::cout << "double: Non displayable" << std::endl;
	return ;
}

void	Scalar::convert(void)
{
	std::string str;
	str = this->_input;
	switch (this->_type)
	{
		case (INF):
		{
			this->_printInfCase();
			break;
		}
		case (CHAR):
		{
			this->_printCharCase();
			break;
		}
		case (INT):
		{
			this->_printIntCase();
			break;
		}
		case (FLOAT):
		{
			this->_printFloatCase();
			break;
		}
		case (DOUBLE):
		{
			this->_printDoubleCase();
			break;
		}
		default:
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			break;
		}
	}
	return ;
}
