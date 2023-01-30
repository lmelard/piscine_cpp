/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:53:27 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/30 16:02:19 by lmelard          ###   ########.fr       */
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

/* OPERATEURS D'INCREMENTATION */

Fixed	Fixed::operator++(void) // pre-incrementation
{
	Fixed	tmp;
	this->_rawBits++;
	tmp._rawBits = this->_rawBits;
	return (tmp);
}

Fixed	Fixed::operator++(int) // post-incrementation
{
	Fixed	tmp;
	tmp._rawBits = this->_rawBits;
	this->_rawBits += 1;
	return (tmp);
}

Fixed	Fixed::operator--(void) // pre-decrementation
{
	Fixed	tmp;
	this->_rawBits += 1;
	tmp._rawBits = this->_rawBits;
	return (tmp);
}

Fixed	Fixed::operator--(int) // post-incrementation
{
	Fixed	tmp;
	tmp._rawBits = this->_rawBits;
	this->_rawBits++;
	return (tmp);
}

/* FONCTIONS MEMBRES PUBLIQUES SURCHARGEES */

Fixed &	Fixed::min(Fixed & a, Fixed & b)
{
	std::cout << "non const min function called" << std::endl;
	if (a > b)
		return (b);
	else
		return (a);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	std::cout << "const min function called" << std::endl;
	if (a._rawBits > b._rawBits)
		return (b);
	else
		return (a);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	std::cout << "non const max function called" << std::endl;
	if (a >= b)
		return (a);
	else
		return (b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	std::cout << "const max function called" << std::endl;
	if (a._rawBits >= b._rawBits)
		return (a);
	else
		return (b);
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
