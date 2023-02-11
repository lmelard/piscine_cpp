/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specialisation.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:01:39 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/11 19:23:54 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template< typename U> // specialisation partielle
class <int, U> Pair { // c'est la que la syntaxe differe a tous les endroit ou on devait ecrire T on met int

	public:
};

template<> // specialisation complete 
class <bool, bool> Pair { // c'est la que la syntaxe differe a tous les endroit ou on devait ecrire T on met int

	public:
};

#define max(x, y)	( ((x)>=(y)) ? (x):(y))

// une macro # instruction de preprocesseur  il se contente de parcourir code source pour l'interpreation du code ensuite
// une macro parametrique les comportement de remplacement est conserve mais pb. 
// ca veut dire que quelque soit la comppplexite de x elle va etre copie. mais si effet de bord cet effet de bord est copie egalement 
