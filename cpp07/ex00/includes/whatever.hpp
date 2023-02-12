/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:36:33 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/12 11:48:55 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename T> // mot cle template pour indiquer au compilateur qu'on cree un template on peut mettre une ou plusieurs variables de type dasn le template
T const &	max(T const & x, T const & y)
{
	return (x >= y ? x : y);
}

template< typename T>
T const &	min(T const & x, T const & y)
{
	return (x <= y ? x : y);
}

template< typename T>
void	swap(T & x, T & y)
{
	T tmp = x;
	x = y;
	y = tmp;
	return ;
}

#endif