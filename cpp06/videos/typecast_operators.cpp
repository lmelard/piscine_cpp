/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typecast_operators.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:52:11 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/09 17:02:13 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* ************************************************************************* */

class Foo {
	
	public:
	
		Foo(float const v): _v(v){}
		
		float	getV(void)	{ return this->_v; }
		operator float()	{ return this->_v; }
		operator int()		{ return static_cast<int>(this->_v); }

	private:
		float _v;
};

/* ************************************************************************* */

int	main(void)
{
	Foo	a(420.024f);
	float b = a; // grace aux operateurs de cast
	int	c = a; // grace aux operateurs de cast

	std::cout << a.getV() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return 0;
}