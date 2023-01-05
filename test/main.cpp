/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:47:53 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/05 13:31:13 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

// int main() 
// {
//   std::string text = "This";
//   for (size_t i = 0; i < text.size() && i < 10; ++i)
//   {
//     if (text.size() > 10 && i == 9)
//       std::cout << ".";
//     else
//       std::cout << text[i];
//   }
//   std::cout << std::endl;
//   return 0;
// }

int main(void)
{
  std::string text = "This is a longer string";
  std::stringstream stream;
  stream << text.substr(0, 10);
  std::string output = stream.str();
  std::cout << output << std::endl;
  return 0;
}