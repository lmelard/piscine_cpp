/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:49:25 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/13 22:34:15 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << "MutantStack default constructor called" << std::endl;
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & src) : std::stack<T>(src)
{
	std::cout << "MutantStack copy comstructor called" << std::endl;
	*this = src;
	return ;
}

template <typename T>
MutantStack<T>::~MutantStack() 
{
	return ;
}

template <typename T, std::stack<T>::container_type::iterator>
iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

