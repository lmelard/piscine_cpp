/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:33:31 by lenamelard        #+#    #+#             */
/*   Updated: 2023/01/12 14:54:55 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon 
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string& getType(void);
		void	setType(std::string type);
	private:
		std::string	_type;
};

#endif