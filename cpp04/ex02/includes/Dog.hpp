/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:15:58 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/06 16:52:56 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		virtual ~Dog();
		
		Dog	& operator=(Dog const & rhs);
		virtual void makeSound(void) const;
		Brain * getBrain(void) const;

	private:
		Brain* _brain;
};

#endif