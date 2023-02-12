/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:57:12 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/12 12:17:35 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void	iter(T * array, int size, void(*f)(T &))
{
	for (int i = 0; i < size; i++)
	{
		f(array[i]);
	}
	return ;
}

template < typename T>
void	print(T & x)
{
	std::cout << x << std::endl;
	return ;
}

#endif
