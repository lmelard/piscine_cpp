/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:46:40 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/01 11:58:22 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap (void);
		ScavTrap (std::string const name);
		ScavTrap (ScavTrap const & src);
		~ScavTrap (void);

		ScavTrap & operator=(ScavTrap const & rhs);

		void	attack(const std::string& target);
		void	printScavTrapInfo(void) const;
		void	guardGate(void);
};

# endif
