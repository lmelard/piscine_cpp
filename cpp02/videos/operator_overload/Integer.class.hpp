/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:28:37 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/19 13:34:10 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

# include <iostream>

class Integer
{
	public:
		Integer(int const n);
		~Integer(void);

		int	getvalue(void) const;

		Integer & operator=(Integer const & rhs); //c'est l'instance courante qui est renvoyee ! l'instance courante est le premier param cache. 
		//on doit renvoyer une reference sur instance courante afin de pouvoir chainer 
		Integer   operator+(Integer const & rhs);
		
	private:
		int	_n;
};

std::ostream &	operator<<(std::ostream & o, Integer const & rhs);

#endif