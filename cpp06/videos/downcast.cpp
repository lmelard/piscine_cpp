/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   downcast.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:46:19 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/09 15:27:45 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent{};
class Child1: public Parent{};
class Child2: public Parent{};

int	main(void)
{
	Child1	a;
	
	Parent * b = &a;
	Parent * c = (Parent *) &a;
	
	Parent * d = &a;			// implicit upcast = OK 
	Child1 * e = d;				// Implicit downcast = HELL NO
	Child2 * f = (Child2 *)d;	// explicit downcast = OK but relaly /
}