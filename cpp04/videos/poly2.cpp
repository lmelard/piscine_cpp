/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:10:34 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/02 13:52:26 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class	ACharacter
{
	private:
		std::string	name;
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
	std::cout << "Hello" << target << " !" << std::endl;
}

void	Warrior::attack(std::string const & target)
{
	std::cout << "*attacks " << target << " with a sword *" << std::endl;
}

class ICoffeeMaker //interface une interface n'a aucun attribut 
{
	public:
		virtual void	fillWaterTank(IWaterSource * src) = 0;
		virtual Icoffee* makeCoffee(std::string const & type) = 0;
};

int	main(void)
{
	ACharacter*	a = new Warrior();
	
	//This would NOT be ok because ACharacter is abstract
	//ACharacter* b = new ACharacter();

	a->sayHello("students");
	a->attack("roger");
}