/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:47:53 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/04 15:47:59 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <csignal>

void terminate_handler() {
  std::cout << "Terminating program." << std::endl;
  std::exit(0);
}

int main() {
  std::set_terminate(terminate_handler);

  std::string s;
  while (true) {
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::cout << "You entered: " << s << std::endl;
  }
  return 0;
}
