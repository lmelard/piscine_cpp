/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:49:04 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/12 17:32:02 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstdlib>
#include <ctime>
#include <iostream>

template< typename T >
class	Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const & src);
		~Array();
	
		Array &	operator=(Array<T> const & rhs);
		T & 		operator[](unsigned int const i);
		T const &	operator[](unsigned int i) const;

		unsigned int	size(void) const;

		class OutOfBounds : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("The index is out of bounds");
				}
		};

	private:
		T*				_array;
		unsigned int	_size;
};

template< typename T >
Array<T>::Array()
{
	std::cout << "Array default constructor called" << std::endl;
	this->_size = 0;
	this->_array = NULL;
	return;
}

template< typename T >
Array<T>::Array(unsigned int n)
{
	std::cout << "Array unsigned int constructor called" << std::endl;
	this->_size = n;
	this->_array = new T[n]; // initialized by default
	return;
}

template< typename T >
Array<T>::~Array(void)
{
	std::cout << "Array destructor called" << std::endl;
	delete[] this->_array;
	return ;
}

template< typename T >
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

template< typename T >
Array<T>::Array(Array const & src) : _array(0), _size(0)
{
	std::cout << "Array copy constructor called" << std::endl;
	*this = src;
	return;
}

template< typename T >
Array<T> & Array<T>::operator=(Array<T> const & rhs)
{
	if (this != &rhs)
	{
		if (this->_array != NULL)
			delete [] this->_array;
		this->_size = rhs.size();
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs._array[i];
	}
	return (*this);
}

// renvoie une exception si jamais cela ne fonctonne pas
template< typename T >
T &	Array<T>::operator[](unsigned int i)
{
	if (i >= this->size())
		throw OutOfBounds();
	return (this->_array[i]);
}

template< typename T >
T const &	Array<T>::operator[](unsigned int i) const
{
	if (i >= this->size())
		throw OutOfBounds();
	return (this->_array[i]);
}

#endif
