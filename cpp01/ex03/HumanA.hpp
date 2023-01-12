/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:33:20 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/12 15:07:13 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
	public:
		HumanA(std::string name, Weapon type);
		~HumanA(void);
		void	attack(void);
		void	setName(std::string name);
		void	setWeapon(Weapon type);
	private:
		std::string	_name;
		Weapon* _type;
};

#endif