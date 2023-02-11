/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:31:53 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/11 18:57:40 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* type par defaut ; template<typename T = float>*/ // il n'y aura pas de defintion implicite si le type n'est pas indique
template< typename T>
class List {
	public:

		List< T >(T const & list) {};
		List< T >(List<T> const & list) {};
		~List< T >(void) {};

		// etc...
	private:
		T			_content;
		List<T> *	_next;
};

int	main(void)
{
	List<int>		a(42);
	List<float> 	b(3.14f);
	List<List<int>> c(a);


	return 0;
}



/* surcharge d'operateur << pour une classe template */

// std::ostream & operator<<(std::ostream & o, List<T> const & l)
// {
// 	o << .....
// 	return o
// }