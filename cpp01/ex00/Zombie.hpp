/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:36:12 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/10 16:46:27 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>


/* Static functions are not associated with an instance 
of a class but with the class itself */ 

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
		void	randomChump(std::string name);
	private:
		std::string	_name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
