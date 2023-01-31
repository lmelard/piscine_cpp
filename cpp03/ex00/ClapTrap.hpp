/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:45:06 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/31 14:14:47 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

# define RESET		"\033[0m"
# define BRED		"\033[1;31m"   
# define BBLUE		"\033[1;34m"  
# define BYELLOW	"\033[1;33m"

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		
		void		setAttackDammage(int const attackDammage);
		void		setEnergyPoints(int const energyPoints);
		void		setHitPoints(int const hitPoints);
		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDammage(void) const;
		
		void		printClapTrapInfo(void) const;
		
		
		ClapTrap & operator=(ClapTrap const & rhs);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDammage;
		
};

//std::ofstream & operator<<(std::ofstream & o, ClapTrap const & rhs);

#endif