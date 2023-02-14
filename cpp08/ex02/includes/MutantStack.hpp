/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:40:39 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/14 14:48:28 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <algorithm>
# include <vector>
# include <deque>
# include <iostream>

/* 
** template de std stack 
** template <class T, class Container = deque<T> > class stack;
*/

/* The c in c.begin() and c.end() is a container_type defined 
in the stack class */

template < typename T >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack<T> & src);
		virtual ~MutantStack();

		MutantStack<T> & operator=(MutantStack const & rhs);

		// definit in alias iterator pour le type d'iterateur du container sous jacent
		// en general un std::deque<T> ou un std::vector<T>
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		
		iterator				begin();
		iterator				end();
		reverse_iterator		rbegin();
		reverse_iterator		rend();

	private:
		
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << "MutantStack default constructor called" << std::endl;
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> & src) : std::stack<T>(src)
{
	std::cout << "MutantStack copy comstructor called" << std::endl;
	*this = src;
	return ;
}

template <typename T>
MutantStack<T>::~MutantStack() 
{
	std::cout << "MutantStack destructor called" << std::endl;
	return ;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack<T> const & src)
{
	if (this != &src)
		this->c = src.c;
	return (*this);
		
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return (this->c.rend());
}

// template <typename T>
// typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin()
// {
// 	return (this->c.cbegin());
// }

// template <typename T>
// typename MutantStack<T>::const_iterator	MutantStack<T>::cend()
// {
// 	return (this->c.cend());
// }

// template <typename T>
// typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::crbegin()
// {
// 	return (this->c.crbegin());
// }

// template <typename T>
// typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::crend()
// {
// 	return (this->c.crend());
// }


#endif