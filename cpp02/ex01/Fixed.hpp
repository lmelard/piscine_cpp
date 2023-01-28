/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:49:05 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/28 16:48:28 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class	Fixed 
{
	public:
		// constructeur par defaut
		Fixed(void);
		// constructeur de recopie
		Fixed(Fixed const & src);
		// constructeur convertisseur int -> virgule fixe
		Fixed(int const c);
		// constructeur convertisseur float -> virgule fixe
		Fixed(float const f);
		// destructeur
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);
		int		getRawBits(void) const;
		void	setRawBits( int const raw );
		// convertit valeur en virgule fixe en nombre entier
		float	toFloat(void) const;
		// convertit valeur en virgule fixe en nombre entier
		int		toInt(void) const;

	private:
		int					_rawBits;
		static const int	_bitsNbr;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
