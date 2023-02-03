/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:03:33 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/03 20:12:30 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int	main(void)
{
	/* ANIMAL ET DERIVEES */
	
	// const	Animal* meta = new Animal();
	// std::cout << std::endl;
	// const	Animal* j = new Dog();
	// std::cout << std::endl;
	// const	Animal* i = new Cat();
	// std::cout << std::endl;
	// //const	Cat	miaou = Dog();
	// const	Cat	miaou = Cat();
	// std::cout << std::endl;
	// const	Cat	chat = Cat(miaou);
	// std::cout << std::endl;
	// const	Dog	doggo = Dog();
	// std::cout << std::endl;
	
	// std::cout << "j type: " << j->getType() << " " << std::endl;
	// std::cout << "i type: " << i->getType() << " " << std::endl;
	// std::cout << "miaou type: " << miaou.getType() << " " << std::endl;
	// std::cout << "chat type: " << chat.getType() << " " << std::endl;
	// std::cout << "doggo type: " << doggo.getType() << " " << std::endl;
	// std::cout << std::endl;
	
	// std::cout << "j sound: ";
	// j->makeSound();
	// std::cout << "i sound: ";
	// i->makeSound();
	// std::cout << "miaou sound: ";
	// miaou.makeSound();
	// std::cout << "chat sound: ";
	// chat.makeSound();
	// std::cout << "doggo sound: ";
	// doggo.makeSound();
	// std::cout << "meta sound: ";
	// meta->makeSound();

	// std::cout << std::endl;
	// delete meta;
	// std::cout << std::endl;
	// delete j;
	// std::cout << std::endl;
	// delete i;
	// std::cout << std::endl;

	/* WRONG ANIMAL ET DERIVEE */

	const	WrongAnimal* meta = new WrongAnimal();
	std::cout << std::endl;
	const	WrongAnimal* j = new WrongDog();
	std::cout << std::endl;
	const	WrongAnimal* i = new WrongCat();
	std::cout << std::endl;
	//const	WrongCat	miaou = WrongDog();
	const	WrongCat	miaou = WrongCat();
	std::cout << std::endl;
	const	WrongCat	chat = WrongCat(miaou);
	std::cout << std::endl;
	const	WrongDog	doggo = WrongDog();
	std::cout << std::endl;
	
	std::cout << "j type: " << j->getType() << " " << std::endl;
	std::cout << "i type: " << i->getType() << " " << std::endl;
	std::cout << "miaou type: " << miaou.getType() << " " << std::endl;
	std::cout << "chat type: " << chat.getType() << " " << std::endl;
	std::cout << "doggo type: " << doggo.getType() << " " << std::endl;
	std::cout << std::endl;
	
	std::cout << "j sound: ";
	j->makeSound();
	std::cout << "i sound: ";
	i->makeSound();
	std::cout << "miaou sound: ";
	miaou.makeSound();
	std::cout << "chat sound: ";
	chat.makeSound();
	std::cout << "doggo sound: ";
	doggo.makeSound();
	std::cout << "meta sound: ";
	meta->makeSound();

	std::cout << std::endl;
	delete meta;
	std::cout << std::endl;
	delete j;
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;
	
	return 0;
}