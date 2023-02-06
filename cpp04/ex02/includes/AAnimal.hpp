/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:43:32 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/06 16:48:47 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

# define RESET		"\033[0m"
# define BRED		"\033[1;31m"   
# define BBLUE		"\033[1;34m"  
# define BYELLOW	"\033[1;33m"
# define BGREEN		"\033[1;92m"
# define PURPLE		"\033[0;35m"
# define CYAN		"\033[0;36m"
# define YELLOW		"\033[0;33m"
# define GREEN		"\033[0;32m"

class AAnimal
{
	public:
		AAnimal();
		AAnimal(AAnimal const & src);
		virtual ~AAnimal();

		AAnimal & operator=(AAnimal const & rhs);
		virtual void makeSound(void) const = 0;
		std::string	getType(void) const;
	protected:
		std::string	_type;
};

#endif