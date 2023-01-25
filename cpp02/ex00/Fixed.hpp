/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:03:26 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/25 16:52:14 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class	Fixed 
{
	public:
		Fixed(void); // constructeur par defaut
		Fixed(Fixed const & src); // constructeur de recopie
		~Fixed(void); // destructeur

		Fixed & operator=(Fixed const & rhs);
		int		getRawBits(void) const;
		void	setRawBits( int const raw );
	private:
		int					_rawBits;
		static int const	_bitsNbr;
};

#endif

// nombre litteral = valeur numerique qui ne change pas au cours de l'execution d'un programme
// peuvent etre des int ou des float
// ne peuvent pas etre modifiees apres avoir ete definies