/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:03:33 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/06 17:26:09 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	/* ERROR TRYING TO INSTANTIATE AN AANIMAL */
	
	// AAnimal	girafe;
	
	/* PREVIOUS AANIMAL TAB TEST */
	AAnimal* tab[8];
	for (int i = 0; i < 4; i++)
		tab[i] = new Cat();
	std::cout << std::endl;
	for (int i = 4; i < 8; i++)
		tab[i] = new Dog();
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
		std::cout << tab[i]->getType() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
		tab[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
		delete tab[i];

	/* DEEP DOG COPY */
	{
		// Dog hermes;
		// Brain* hermesBrain;

		// std::cout << std::endl;
		// hermesBrain = hermes.getBrain();
		// hermesBrain->setIdea("i hate cats", 0);
		// std::cout << "hermes first idea: " << hermesBrain->getIdea(0) << std::endl;
		// std::cout << std::endl;

		// Dog lola(hermes);
	
		// Brain* lolaBrain;
		// std::cout << std::endl;
		// lolaBrain = lola.getBrain();
		// std::cout << "lola first idea:   " << hermesBrain->getIdea(0) << std::endl;
		// std::cout << std::endl;

		// lolaBrain->setIdea("i love cats", 0);
		// std::cout << "lola first idea:   " << lolaBrain->getIdea(0) << std::endl;
		// std::cout << "hermes first idea: " << hermesBrain->getIdea(0) << std::endl << std::endl;
	}
	/* DEEP CAT COPY */
	{
		// std::cout << std::endl;
		// Cat	titi;
		// Brain* titiBrain;
		// std::cout << std::endl;
		// titiBrain = titi.getBrain();
		// titiBrain->setIdea("i hate dogs", 0);
		// std::cout << "titi first idea:   " << titiBrain->getIdea(0) << std::endl;
		// std::cout << std::endl;

		// Cat chat(titi);
	
		// Brain* chatBrain;
		// std::cout << std::endl;
		// chatBrain = chat.getBrain();
		// std::cout << "chat first idea:   " << chatBrain->getIdea(0) << std::endl;
		// std::cout << std::endl;

		// chatBrain->setIdea("i love dogs", 0);
		// std::cout << "chat first idea:   " << chatBrain->getIdea(0) << std::endl;
		// std::cout << "titi first idea:   " << titiBrain->getIdea(0) << std::endl << std::endl;
	}
	
	return 0;
}