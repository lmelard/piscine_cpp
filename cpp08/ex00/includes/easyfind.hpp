/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:53:33 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/14 15:59:29 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <iterator>
# include <algorithm>

/* Utilisation de la STL (containers) et d'algorithm avec find*/
/*
** Iterator: objet qui permet de pointer sur un element
** appartenant a un range d'elements (ex tableau ou container)
** on peut iterer sur les elements en utilisant des operateurs

** On declare l'iterateur de cette maniere vector<int>:: iterator it
** mais on l'utilsie comme un pointeur en l'incrementant de cette maniere par ex it++
**  et pour afficher la valeur de l'element on le dereference *it
*/

class NoOccurence : public std::exception
{
	public:
		virtual const char * what() const throw()
		{
			return ("No occurence of the value was found");
		}
};

template < typename T >
typename T::iterator easyfind(T x, int nb)
{
	if (std::find(x.begin(), x.end(), nb) != x.end())
		return (std::find(x.begin(), x.end(), nb));
	throw NoOccurence();
}

#endif