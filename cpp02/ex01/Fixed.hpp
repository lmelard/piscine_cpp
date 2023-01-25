/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:49:05 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/25 18:54:25 by lmelard          ###   ########.fr       */
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
		Fixed(const int c);
		~Fixed(void); // destructeur

		Fixed & operator=(Fixed const & rhs);
		int		getRawBits(void) const;
		void	setRawBits( int const raw );
	private:
		int					_rawBits;
		static const int	_bitsNbr;
};

#endif
