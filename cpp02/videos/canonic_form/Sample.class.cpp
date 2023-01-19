/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:28:13 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/19 17:55:33 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void) : _foo(0)
{
	std::cout << "default constructor called" << std::endl;
	return;
}

Sample::Sample(int const n)
{
	std::cout << "Parametric constructor called" << std::endl;
	this->_foo = n;
	return ;
}

Sample::Sample(Sample const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Sample::~Sample(void)
{
	return;
}

int Sample::getFoo(void) const
{
	return (this->_foo);
}

Sample & Sample::operator=(Sample const & rhs)
{
	std::cout << "assignment operator called" << std::endl;

	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Sample const & i)
{
	o << "The value of _foo is : " << i.getFoo();
	return (o);
}