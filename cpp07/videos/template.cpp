/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:24:12 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/11 18:30:54 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T> // mot cle template pour indiquer au compilateur qu'on cree un template on peut mettre une ou plusieurs variables de type dasn le template
T const &	max(T const & x, T const & y)
{
	return (x >= y ? x : y);
}

int foo(int x)
{
	std::cout << "long computing time" << std::endl;
	return x;
}

int	main(void)
{
	int	a = 21;
	int	b = 42;

	std::cout << "Max of " << a << "and" << b << "is ";
	std::cout << max<int>(a,b) << std::endl; // explicit instanciation
	std::cout << "Max of " << a << " and " << b << "is ";
	std::cout << max(a,b) << std::endl; // implicit instanciation

	float c = - 1.7f;
	float d = 4.2f;

	std::cout << "Max of " << a << "and" << b << "is ";
	std::cout << max<float>(a,b) << std::endl; // explicit instanciation
	std::cout << "Max of " << a << " and " << b << "is ";
	std::cout << max(a,b) << std::endl; // implicit instanciation

	char e = 'a';
	char f = 'z';

	std::cout << "Max of " << a << "and" << b << "is ";
	std::cout << max<char>(a,b) << std::endl; // explicit instanciation
	std::cout << "Max of " << a << " and " << b << "is ";
	std::cout << max(a,b) << std::endl; // implicit instanciation

	int	ret = max<int>(foo(a), foo(b));
	std::cout << "Max of " << a << " and " << b << "is ";
	std::cout << ret << std::endl;

	return (0);
}

