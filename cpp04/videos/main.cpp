/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:31:50 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/02 12:02:54 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	// This is OK, obviously, Warrior IS a Warrior
	Warrior* a = new Warrior();
	
	// This is also OK because Warrior IS a Character
	Character* b = new Warrior();

	// This would NOT be ok because Character IS NOT a Warrior
	// (Although thy ARE related, and W IS-A C, the reverse is untrue)
	// Warrior* c = new Character();

	a->sayHello("students"); // affiche le message de warrior
	b->sayHello("stuudent"); //affiche le message de character meme si c'est un warrior

	//mot cle virtual permet un linkage dynamique et plus statique
	
}