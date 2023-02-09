/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic_cast.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:45:42 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/09 16:22:15 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// seul cast qui s'effecctue a l'execution et non a la compilation 
// que dans le cas d'une instance polymorphique 

// utile pour verifier des plugins par exemple

#include <iostream>
#include <typeinfo>
#include <exception>

class Parent	{public: virtual ~Parent(void){}};
class Child1: public Parent {};
class Child2: public Parent {};

int	main(void)
{
	Child1	a;
	Parent*	b = &a;
	

	//Explicit downcast avec pointeurs
	Child1*	c = dynamic_cast<Child1 *>(b);
	if (c == NULL)
	{
		std::cout << "Conversion is NOT OK" << std::endl;
	}
	else 
	{
		std::cout << "Conversion is OK" << std::endl;
	}
	
	// explicit downcast avec references
	try
	{
		Child2 & d = dynamic_cast<Child2 &>(*b);
		std::cout << "Conversion is Ok" << std::endl;
	}
	catch(const std::bad_cast& bc)
	{
		std::cerr << "Conversion is NOT OK " << bc.what() << std::endl;
	}
	
}