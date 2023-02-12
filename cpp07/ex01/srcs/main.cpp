/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:55:53 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/12 17:16:46 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int array[] = {1, 2, 435, 4656};
	int size = sizeof(array) / sizeof(array[0]);
	iter(array, size, print);

	std::cout << std::endl;

	char array2[] = {'c', 'a', 'r', 't', 't', 'f'};
	int size2 = sizeof(array2) / sizeof(array2[0]);
	iter(array2, size2, print);

	std::cout << std::endl;

	std::string array3[] = {"coucou", "c", "moi", "haha"};
	int	size3 = sizeof(array3) / sizeof(array3[0]);
	iter(array3, size3, print);

	std::cout << std::endl;
	
	float array4[] = {1.546f, 2.5654f, 435.15654f, 4656.45f};
	int size4 = sizeof(array4) / sizeof(array4[0]);
	iter(array4, size4, print);

	std::cout << std::endl;

	double array5[] = {45.12, 78.123, 78.156, 789.123};
	int size5 = sizeof(array5) / sizeof(array5[0]);
	iter(array5, size5, print);
	
	return (0);
}