/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:43:05 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/11 12:00:43 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <limits>
# include <climits>
# include <sstream>

enum Type
{
	INT = 1,
	CHAR = 2,
	FLOAT = 3,
	DOUBLE = 4,
	INF = 5,
};

class Scalar
{
	public:
	
		Scalar(void);
		Scalar(std::string const input);
		Scalar(Scalar const & src);
		~Scalar();
		
		Type	getType(void) const;	// identifie le type
		void	convert(void); 			// convertit la string dans son type
		
		Scalar & operator=(Scalar const & rhs);

		void	idType(void);
		bool	isDigit(char c);

	private:
	
		std::string	const _input;
		bool _isChar(void);
		bool _isInt(void);
		bool _isDouble(void);
		bool _isFloat(void);
		bool _isInf(void);

		void	_printCharCase(void);
		void	_printInfCase(void);
		void	_printFloatCase(void);
		void	_printDoubleCase(void);
		void	_printIntCase(void);

		void	_printNonDisplayable(void) const;

		long double _value;
		char		_c;
		double		_d;
		float		_f;
		int			_i;
		long int	_li;


		int	_coma;

		Type _type;
};

#endif