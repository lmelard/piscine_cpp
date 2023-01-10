/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:28:00 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/09 17:50:16 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "refence.hpp"
#include <iostream>


// les references completent les pointeurs mais ne les remplacent pas

int	main(void)
{
	Student	lena = Student("lmelard");
	Student const	chris = Student("tinychris");

	std::cout << lena.getLoginRefConst() << " " << chris.getLoginRefConst() << std::endl;
	std::cout << *(lena.getLoginPtrConst()) << " " << *(chris.getLoginPtrConst()) << std::endl;

	lena.getLoginRef() = "lenamelard";
	std::cout << lena.getLoginRefConst() << std::endl;
	
	*(lena.getLoginPtr()) = "lenouillemelard";
	std::cout << lena.getLoginRefConst() << std::endl;
	return (0);
}
