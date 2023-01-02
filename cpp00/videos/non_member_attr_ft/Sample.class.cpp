/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:47:44 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/21 15:53:25 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void)
{
	std::cout << "Constructor called" <<std::endl;
	Sample::_nbInst += 1;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;

	return;
}

int	Sample::getNbInst(void)
{
	return Sample::_nbInst;
}

//pour initialiser une attibut static ie non membre
int	Sample::_nbInst = 0;