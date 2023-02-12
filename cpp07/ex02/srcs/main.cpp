/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:52:38 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/12 17:33:34 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
	std::cout << numbers.size() << std::endl;
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
		Array<int> tmp = numbers;
		const Array<int> lol = numbers;
		std::cout << "lol: " << lol[0] << std::endl;
		//lol[0] = 1; marche pas car const 
				
		std::cout << std::endl << "number size: " << numbers.size() << std::endl;
		std::cout << "tmp size: " << tmp.size() << std::endl;
		std::cout << "number first elem: " << numbers[0] << std::endl;
		std::cout << "tmp first elem: " << tmp[0] << std::endl << std::endl;
		tmp[0] = 42;
		std::cout << "number first elem: " << numbers[0] << std::endl;
		std::cout << "tmp first elem: " << tmp[0] << std::endl << std::endl;
		
        Array<int> test(tmp);
		std::cout << "tmp size: " << tmp.size() << std::endl;
		std::cout << "test size: " << test.size() << std::endl;
		std::cout << "tmp first elem: " << tmp[0] << std::endl;
		std::cout << "test first elem: " << test[0] << std::endl << std::endl;
		test[0] = 36;
		std::cout << "tmp first elem: " << tmp[0] << std::endl;
		std::cout << "test first elem: " << test[0] << std::endl << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cout << "didn't save the same value!!" << std::endl;
			delete [] mirror;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
