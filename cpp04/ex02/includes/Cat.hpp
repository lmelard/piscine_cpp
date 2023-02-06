/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:17:58 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/06 16:52:53 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);

		Cat	& operator=(Cat const & rhs);
		virtual void makeSound(void) const;
		Brain * getBrain(void) const;
	private:
		Brain*	_brain;
	
};

#endif