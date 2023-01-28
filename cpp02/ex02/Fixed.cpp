/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:53:27 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/28 20:06:40 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_bitsNbr = 8;

Fixed::Fixed(void)
{
	this->setRawBits(0);
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
	return ;
}

Fixed::Fixed(int const c)
{
	this->setRawBits(c);
	return ;
}

Fixed::Fixed(float const f)
{
	this->_rawBits = roundf(f * (1 << Fixed::_bitsNbr));
	return ;
}

/* OPERATEUR D'ASSIGNATION */

Fixed & Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();
	return *this;
}

/* ARITHMETIC OPERATORS */

Fixed	Fixed::operator+(Fixed const & rhs)
{
	Fixed	tmp;
	tmp._rawBits = this->_rawBits + rhs._rawBits;
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	Fixed	tmp;
	tmp._rawBits = this->_rawBits - rhs._rawBits;
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	Fixed	tmp;
	tmp._rawBits = this->toFloat() * rhs.toFloat() * (1 << Fixed::_bitsNbr);
	// tmp._rawBits = this->_rawBits * rhs._rawBits;
	return (tmp);
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	Fixed	tmp;
	tmp._rawBits = this->toFloat() / rhs.toFloat() * (1 << Fixed::_bitsNbr);
	return (tmp);
}

/* OPERATEURS DE COMPARAISON */

t_bool Fixed::operator>(Fixed const & rhs)
{
	if (this->_rawBits > rhs._rawBits)
		return (TRUE);
	return (FALSE);
}

t_bool Fixed::operator<(Fixed const & rhs)
{
	if (this->_rawBits < rhs._rawBits)
		return (TRUE);
	return (FALSE);
}

t_bool Fixed::operator>=(Fixed const & rhs)
{
	if (this->_rawBits >= rhs._rawBits)
		return (TRUE);
	return (FALSE);
}

t_bool Fixed::operator<=(Fixed const & rhs)
{
	if (this->_rawBits <= rhs._rawBits)
		return (TRUE);
	return (FALSE);
}

t_bool Fixed::operator==(Fixed const & rhs)
{
	if (this->_rawBits == rhs._rawBits)
		return (TRUE);
	return (FALSE);
}

t_bool Fixed::operator!=(Fixed const & rhs)
{
	if (this->_rawBits != rhs._rawBits)
		return (TRUE);
	return (FALSE);
}

int	Fixed::getRawBits(void)	const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits( int const raw )
{
	this->_rawBits = raw << this->_bitsNbr;
	return ;
}

float	Fixed::toFloat(void) const
{
	float	f;
	f = (float)this->_rawBits / (float)(1 << Fixed::_bitsNbr);
	return (f);
}

int	Fixed::toInt(void) const
{
	int	i;
	i = this->_rawBits >> this->_bitsNbr;
	return i;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
