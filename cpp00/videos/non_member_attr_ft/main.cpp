/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:53:45 by lmelard           #+#    #+#             */
/*   Updated: 2022/12/21 17:01:28 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

void	f0(void)
{
	Sample instance;

	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	return;
}

void	f1(void)
{
	Sample instance;

	std::cout << "Neumber of instances : " << Sample::getNbInst() << std::endl;
	f0();
	return;
}

int	main(void)
{
	//Sample instance;
	
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
}