/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenamelard <lenamelard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:33:25 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/11 17:54:40 by lenamelard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void) const;
	private:
		std::string	_name;
		Weapon	_type;
};

#endif