/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:10:20 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/11 12:44:10 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/* A pointer can be converted to any integral type large enough 
** to hold all values of its type (e.g. to std::uintptr_t)
*/

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data *data = new Data;
	data->i = 42;
	uintptr_t ptr;
	Data *data2 = NULL;

	std::cout << "data2 address: " << data2 << std::endl;
	std::cout << "data address: " << data << std::endl;
	std::cout << "data->i: " << data->i << std::endl;
	ptr = serialize(data);
	std::cout << "uintptr_t ptr: " << ptr << std::endl;
	data2 = deserialize(ptr);
	std::cout << "data2 address: " << data2 << std::endl;
	std::cout << "data2->i: " << data2->i << std::endl;
	data->i++;
	std::cout << "data2->i: " << data2->i << std::endl;

	delete data;
	return (0);
}
