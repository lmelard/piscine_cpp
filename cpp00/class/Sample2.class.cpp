/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:18:06 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/20 18:27:34 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample2.class.hpp"
#include <iostream>

// liste d'initialisation
Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}