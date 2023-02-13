/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:59:27 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/13 20:12:45 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <ctime>
# include <cstdlib>

class Span
{
	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);

		Span & operator=(Span const & rhs);
		void	addNumber(int const nb);
		void	addRangeNumber(unsigned int const nbr);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		int getElem(unsigned int index);
		int	getVectorSize(void);
		int	getN(void);

		class NoMoreSpace : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class NoSpan : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class InvalidArgument : public std::exception
		{
			public:
				virtual const char * what() const throw();
		}; 

	private:
		unsigned int		_N;
		std::vector<int>	_v;
};


#endif
