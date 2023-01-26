/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:01:39 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/26 12:12:59 by lmelard          ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);
		void	setName(std::string name);
		void	announce(void);
	private:
		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

// Zombie* newZombie(std::string name);
// void	randomChump(std::string name);

#endif