/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:53:24 by lmelard           #+#    #+#             */
/*   Updated: 2023/01/30 15:07:21 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

typedef enum s_bool 
{
	FALSE = 0,
	TRUE = 1
} 	t_bool;

class	Fixed 
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const c);
		Fixed(float const f);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);
		
		Fixed	operator+(Fixed const & rhs);
		Fixed 	operator-(Fixed const & rhs);
		Fixed	operator*(Fixed const & rhs);
		Fixed	operator/(Fixed const & rhs);
		
		t_bool	operator>(Fixed const & rhs);
		t_bool	operator<(Fixed const & rhs);
		t_bool	operator>=(Fixed const & rhs);
		t_bool	operator<=(Fixed const & rhs);
		t_bool	operator==(Fixed const & rhs);
		t_bool	operator!=(Fixed const & rhs);
		
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		static Fixed & min(Fixed & a, Fixed & b);
		static Fixed const & min(Fixed const & a, Fixed const & b);
		static Fixed & max(Fixed & a, Fixed & b);
		static Fixed const & max(Fixed const & a, Fixed const & b);	
		
		int		getRawBits(void) const;
		void	setRawBits( int const raw );
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_rawBits;
		static const int	_bitsNbr;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
