/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:39:36 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/18 16:03:41 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void Harl::complain(std::string level)
{
	std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptrLevel[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int j = 0;
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(tab[i]) == 0)
		{
			j = i;
			break;
		}
		if (i == 3)
			j = 4;
	}
	switch(j)
	{
		case 0:
			(this->*ptrLevel[j])();
			j++;
		case 1:
			(this->*ptrLevel[j])();
			j++;
		case 2:
			(this->*ptrLevel[j])();
			j++;
		case 3:
			(this->*ptrLevel[j])();
			break;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return ;
}

void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do !" << std::endl;
	return ;
}

void	Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger !" << std::endl;
	std::cout << "If you did, I wouldn't be asking for more !" << std::endl;
	return ;
}

void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl; 
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}
