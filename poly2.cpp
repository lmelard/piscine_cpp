/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:10:34 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/01 17:29:08 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class	ACharacter
{
	public:
		virtual void	attack(std::string const & target) = 0; // on ne peut pas implementer a methode, on la definie comme etant = a 0
		// on ne va donc pas pouvoir instancier la classe -> elle est abstraite
		// le caractere ne 
		void	sayHello(std::string const & target);
};

class	Warrior : public ACharacter
{
	public:
		virtual void	attack(std::string const & target);
};

void	ACharacter::sayHello(std::string const & target)
{
	
}