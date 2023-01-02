/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:50:46 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/21 15:02:16 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void)
{
	std::cout << "Constructor Called" <<std::endl;
	
	this->setFoo(0);
	std::cout << "this->getFoo(): " << this->getFoo() <<std::endl;
	
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor Called" <<std::endl;
	return;
}

int	Sample::getFoo(void)const
{
	return this->_foo;
}

void	Sample::setFoo(int v)
{
	if (v >= 0)
		this->_foo = v;
}