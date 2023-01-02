/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 19:13:27 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/20 19:21:08 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void)
{
	std::cout << "Constructor Called !" <<std::endl;
	this->publicFoo = 0;
	std::cout << "this->publicFoo: " <<this->publicFoo <<std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " <<this->_privateFoo <<std::endl;
	this->_privateBar();
	this->publicBar();
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor Called !" <<std::endl;
	return;
}

void	Sample::publicBar(void)const 
{
	std::cout << "Member Function publicBar Called !" <<std::endl;
	return;
}

void	Sample::_privateBar(void)const 
{
	std::cout << "Member Function _privateBar Called !" <<std::endl;
	return;
}
