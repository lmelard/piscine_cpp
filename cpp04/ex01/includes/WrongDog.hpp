/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:42:29 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/03 19:24:14 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_DOG_HPP
# define WRONG_DOG_HPP

# include "WrongAnimal.hpp"
# include <iostream>

# define RESET		"\033[0m"
# define BRED		"\033[1;31m"   
# define BBLUE		"\033[1;34m"  
# define BYELLOW	"\033[1;33m"
# define BGREEN		"\033[1;92m"
# define PURPLE		"\033[0;35m"
# define CYAN		"\033[0;36m"
# define GREEN		"\033[0;32m"

class WrongDog : public WrongAnimal
{
	public:
		WrongDog(void);
		WrongDog(WrongDog const & src);
		virtual ~WrongDog();
		
		WrongDog	& operator=(WrongDog const & rhs);
		void makeSound(void) const;
	private:
		
};

#endif