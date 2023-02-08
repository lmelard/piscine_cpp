/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:36:56 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 22:16:40 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
	
		AForm(void);
		AForm(std::string const name, bool sign, int const signGrade, int const execGrade);
		AForm(AForm const & src);
		virtual ~AForm(void);

		AForm & operator=(AForm const & rhs);

		std::string const	getName(void) const;
		bool				getSign(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		void				setSign(bool const sign);
		
		void			beSigned(Bureaucrat const &buro);
		virtual void	execute(Bureaucrat const & executor) const  = 0;
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Form: Grade too high !");
				}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Form: Grade too low !");
				}
		};
		class TooLowExecute : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Grade too low to execute!");
				}
		};
		class IsNotSigned : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Form is not signed, cannot execute!");
				}
		};

	private: // les attributs restent prives
	
		std::string const	_name;
		bool 				_sign;
		int const			_signGrade;
		int const			_execGrade;
};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#endif
