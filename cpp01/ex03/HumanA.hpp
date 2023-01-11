/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenamelard <lenamelard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:33:20 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/11 23:15:28 by lenamelard       ###   ########.fr       */
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
		void	attack(void) const;
	private:
		std::string	_name;
		Weapon	_type;
};

#endif