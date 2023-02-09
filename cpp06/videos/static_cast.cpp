/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_cast.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:28:04 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/09 17:35:02 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent{};
class Child1: public Parent{};
class Child2: public Parent{};

class Unrelated{};

int	main(void)
{
	Child1	a;
	
	Parent * b = &a;
	Child1 * c = b;
	Child2 * d = static_cast<Child2 *>(b);
	
	Unrelated * e = static_cast<Unrelated *>(&a); 	
}

// static cast s'occupe de verifier que les adresses sont compatibles dans un meme arbre d'heritage
// concersion simple entre des valeurs directes mais des upcast et downcast sur une hierachie de cast que nous connaissons 