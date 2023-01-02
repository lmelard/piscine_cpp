/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:07:42 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/20 16:31:59 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gl_var = 1;
int	f(void){return 2;}


/* en C on aurait pas pu avoir une seconde variable namespace mais en C++ 
grace a la notion de namespace on peut eviter ce pb et rassembler des symboles
qu'on juge lies semantiquement on peut imbriquer des namespaces dans des 
namespace */

namespace	Foo {
	int	gl_var = 3;
	int	f(void){return 4;}
}

namespace	Bar {
	int	gl_var = 5;
	int	f(void){return 6;}
}

namespace Muf = Bar;

/* Les '::' = operateur de porte*/

int	main(void)
{
	printf("gl_var: %d\n", gl_var);
	printf("f() %d\n\n", f());

	// meme chose qu'au dessus
	printf("::gl_var: %d\n", ::gl_var);
	printf("::f() : %d\n\n", ::f());
	
	printf("Foo::gl_var: %d\n", Foo::gl_var);
	printf("Foo::f(): %d\n\n", Foo::f());

	printf("Bar::gl_var: %d\n", Bar::gl_var);
	printf("Bar::f(): %d\n\n", Bar::f());
	
	printf("Muf::gl_var: %d\n", Muf::gl_var);
	printf("Muf::f(): %d\n\n", Muf::f());
	return 0;
}