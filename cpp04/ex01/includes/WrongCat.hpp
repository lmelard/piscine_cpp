/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:18:15 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/03 15:37:08 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>

# define RESET		"\033[0m"
# define BRED		"\033[1;31m"   
# define BBLUE		"\033[1;34m"  
# define BYELLOW	"\033[1;33m"
# define BGREEN		"\033[1;92m"
# define PURPLE		"\033[0;35m"
# define CYAN		"\033[0;36m"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const & src);
		virtual ~WrongCat(void);

		WrongCat	& operator=(WrongCat const & rhs);
		void makeSound(void) const;
	private:
	
};

#endif