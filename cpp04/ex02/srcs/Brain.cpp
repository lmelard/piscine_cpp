/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:28:24 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/06 14:04:51 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << YELLOW;
	std::cout << "Brain default constructor called" << std::endl;
	std::cout << RESET;
	return ;
}

Brain::~Brain(void)
{
	std::cout << YELLOW;
	std::cout << "Brain default destructor called" << std::endl;
	std::cout << RESET;
	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout << YELLOW;
	std::cout << "Brain copy constructor called" << std::endl;
	std::cout << RESET;
	*this = src;
	// for (int i = 0; i < 100; i++)
	// 	this->_ideas[i] = src.getIdea(i);
}

std::string	Brain::getIdea(int const i) const
{
	return (this->_ideas[i]);
}

void	Brain::setIdea(std::string const idea, int const i)
{
	this->_ideas[i] = idea;
	return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << YELLOW;
	std::cout << "Brain assignement operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs.getIdea(i);
	}
	std::cout << RESET;
	return (*this);
}

