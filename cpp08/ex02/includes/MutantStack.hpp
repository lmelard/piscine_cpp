/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:40:39 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/13 22:36:04 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
# include <algorithm>
# include <vector>
# include <deque>
# include <iostream>

/* 
** template de std stack 
** template <class T, class Container = deque<T> > class stack;
*/

/* The c in c.begin() and c.end() is a container_type defined 
in the stack class */

template < typename T >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack<T> const & src);
		virtual ~MutantStack();

		MutantStack & operator=(MutantStack const & rhs);

		//definit in alias iterator pour le type d'iterateur du container sous jacent
		//en general un std::deque<T> ou un std::vector<T> 
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
		
	private:
		
};


#endif