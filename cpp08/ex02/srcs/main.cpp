/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:36:06 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/14 14:44:52 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << " ------------------- SUBJECT TEST ----------------- " << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "fist elem of the stack : " << std::endl;
		std::cout << mstack.top() << std::endl;
		mstack.pop(); // retire l'element en haut de la stack
		std::cout << mstack.size() << std::endl;
		mstack.push(3); // ajoute un element en haut de la pile 
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);	
	}
	std::cout << " --------------------- STD::LIST ------------------- " << std::endl;
	{
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << mlist.back() << std::endl; // retourne une référence à l'élément à la fin de la liste. 
		mlist.pop_back(); // retire le dernier element de la liste sans retourner de reference
		std::cout << mlist.size() << std::endl;
		mlist.push_back(3); // ajoute un element en haut de la pile 
		mlist.push_back(5);
		mlist.push_back(737);
		//[...]
		mlist.push_back(0);
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mlist);	
	}

	std::cout << " ------------- MutantStack<std::string> ------------- " << std::endl;
	{
		MutantStack<std::string> stack2;
		stack2.push("coucou");
		stack2.push("cest");
		stack2.push("moi");
		std::cout << "fist elem of the stack : " << stack2.top() << std::endl;
		stack2.pop(); // retire l'element en haut de la stack
		std::cout << "stack size: " << stack2.size() << std::endl;
		stack2.push("comment"); // ajoute un element en haut de la pile 
		stack2.push("ca");
		stack2.push("va");
		stack2.push("lol");
		MutantStack<std::string>::iterator it = stack2.begin();
		MutantStack<std::string>::iterator ite = stack2.end();
		std::cout << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		MutantStack<std::string>::reverse_iterator rit = stack2.rbegin();
		MutantStack<std::string>::reverse_iterator rite = stack2.rend();
		std::cout << std::endl;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
		std::stack<std::string> s(stack2);	
	}
	
		std::cout << " ------------- MutantStack<std::float> ------------- " << std::endl;
	{
		MutantStack<float> stack3;
		stack3.push(12.78f);
		stack3.push(42.789f);
		stack3.push(-98.789f);
		std::cout << "fist elem of the stack : " << stack3.top() << std::endl;
		stack3.pop(); // retire l'element en haut de la stack
		std::cout << "stack size: " << stack3.size() << std::endl;
		stack3.push(7.45621f); // ajoute un element en haut de la pile 
		stack3.push(2.0f);
		stack3.push(987.14f);
		stack3.push(963.2f);
		MutantStack<float>::iterator it = stack3.begin();
		MutantStack<float>::iterator ite = stack3.end();
		std::cout << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		MutantStack<float>::reverse_iterator rit = stack3.rbegin();
		MutantStack<float>::reverse_iterator rite = stack3.rend();
		std::cout << std::endl;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
		std::stack<float> s(stack3);	
	}
	
	return 0;
}
