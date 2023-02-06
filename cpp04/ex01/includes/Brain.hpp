/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:26:38 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/06 14:02:26 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

# define RESET		"\033[0m"
# define BRED		"\033[1;31m"   
# define BBLUE		"\033[1;34m"  
# define BYELLOW	"\033[1;33m"
# define BGREEN		"\033[1;92m"
# define PURPLE		"\033[0;35m"
# define CYAN		"\033[0;36m"
# define YELLOW		"\033[0;33m"
# define GREEN		"\033[0;32m"

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);

		Brain & operator=(Brain const & rhs);
		std::string	getIdea(int	const index) const;
		void	setIdea(std::string const idea, int const i);
		
	private:
		std::string	_ideas[100];
};

#endif
