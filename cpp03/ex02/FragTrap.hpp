/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:36:15 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/01 11:58:35 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap (void);
		FragTrap (std::string const name);
		FragTrap (FragTrap const & src);
		~FragTrap (void);

		FragTrap & operator=(FragTrap const & rhs);

		void	attack(const std::string& target);
		void	printFragTrapInfo(void) const;
		void	highFivesGuys(void);
};

#endif