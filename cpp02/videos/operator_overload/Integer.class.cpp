/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:45:30 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/19 13:42:36 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"
#include <iostream>

Integer::Integer( int const n ) : _n(n) {
	std::cout << "Constructor called with value" << n << std::endl;
	return ;
}

Integer::~Integer( void ) {
	std::cout << "Destructor called with value" << this->_n << std::endl;
	return ;
}

int	Integer::getvalue( void ) const {
	return this->_n;
}

Integer & Integer::operator=(Integer const & rhs) {
	std::cout <<  "Assignation operator called from " << this->_n;
	std::cout << " to " << rhs.getvalue() << std::endl;

	this->_n = rhs.getvalue();

	return (*this);
}

Integer	Integer::operator+(Integer const & rhs) {
	std::cout <<  "Assignation operator called with " << this->_n;
	std::cout << " and " << rhs.getvalue() << std::endl;

	return (Integer(this->_n + rhs.getvalue()));
}

std::ostream & operator<<( std::ostream & o, Integer const & rhs) {
	o << rhs.getvalue();
	return o;
}