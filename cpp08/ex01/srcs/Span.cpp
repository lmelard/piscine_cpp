/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:00:48 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/14 16:06:55 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0)
{
	std::cout << "default constructor called" << std::endl;
	return ;
}

Span::Span(unsigned int N) : _N(N)
{
	std::cout << "constructor called" << std::endl;
	return ;
}

Span::Span(Span const & src)
{
	std::cout << "copy constructor called" << std::endl;
	*this = src;
	return ;
}

Span::~Span(void)
{
	std::cout << "destructor called" << std::endl;
	return ;
}


Span & Span::operator=(Span const & rhs)
{
	std::cout << "assignment oprator called" << std::endl;
	if (this != &rhs)
	{	
		this->_v = rhs._v;
		this->_v.resize(rhs._N);
		this->_N = rhs._N;
	}
	return (*this);
}

void	Span::addNumber(int const nb)
{
	if (this->_v.size() >= this->_N)
		throw Span::NoMoreSpace();
	this->_v.push_back(nb);
}

const char * Span::NoMoreSpace::what() const throw()
{
	return ("Cannot add new number, class full");
}

const char * Span::NoSpan::what() const throw()
{
	return ("Not enough elements, no span can be found");
}

const char * Span::InvalidArgument::what() const throw()
{
	return ("Your input is too big for this Span");
}

/* begin et end renvoient un iterateur */

unsigned int	Span::shortestSpan(void) const
{
	if (this->_v.size() < 2)
		throw Span::NoSpan();
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	int shortest = std::abs(tmp[1] - tmp[0]);
	for (std::vector<int>::iterator it = ++tmp.begin(); it != tmp.end(); it++)
	{
		if (std::abs(*it - *(it - 1)) < shortest)
			shortest = std::abs(*it - *(it - 1));
	}
	return (shortest);
}

unsigned int Span::longestSpan(void) const
{
	if (this->_v.size() < 2)
		throw Span::NoSpan();
	std::vector<int> tmp = this->_v;
	int	max = *std::max_element(tmp.begin(), tmp.end());
	int	min = *std::min_element(tmp.begin(), tmp.end());
	return (std::abs(max - min));
}

void	Span::addRangeNumber(unsigned int const nbr)
{
	if (this->_v.size() + nbr > this->_N)
		throw Span::InvalidArgument();
	srand(time(0));
	std::vector<int> t(nbr, 0);
	std::generate(t.begin(), t.end(), rand);
	this->_v.insert(this->_v.end(), t.begin(), t.end());
}

int Span::getElem(unsigned int index)
{
	if (index >= this->_N)
		throw Span::InvalidArgument();
	return (this->_v[index]);
}

int	Span::getN(void)
{
	return (this->_N);
}

int	Span::getVectorSize(void)
{
	return (this->_v.size());
}