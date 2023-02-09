/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:43:05 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/09 21:41:57 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>

enum class Type
{
	INT = 0,
	CHAR = 1,
	FLOAT = 2,
	DOUBLE = 3,
};

class Scalar
{
	public:
	
		Scalar(void);
		Scalar(std::string const input);
		Scalar(Scalar const & src);
		~Scalar();
		
		Type	getType(void) const;
		
		Scalar & operator=(Scalar const & rhs);

		void	idType(void);
		bool	isDigit(char c);

	private:
	
		std::string	const _input;
		bool _isChar(void);
		bool _isInt(void);
		bool _isDouble(void);
		bool _isFloat(void);

		char	_c;
		double	_d;
		float	_f;
		int		_i;

		Type _type;
		
};


#endif