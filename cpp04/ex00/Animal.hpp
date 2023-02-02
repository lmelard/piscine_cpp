/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:43:32 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/02 16:11:28 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal();

		Animal & operator=(Animal const & rhs);
		virtual void makeSound(void) const;
		std::string	getType(void) const;
	protected:
		std::string	_type;
};

#endif