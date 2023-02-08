/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:36:56 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 14:00:53 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
	
		Form(void);
		Form(std::string const name, bool sign, int const signGrade, int const execGrade);
		Form(Form const & src);
		~Form(void);

		Form & operator=(Form const & rhs);

		std::string const	getName(void) const;
		bool				getSign(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		void				setSign(bool const sign);
		
		void	beSigned(Bureaucrat const &buro);
		
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

	private:
	
		std::string const	_name;
		bool 				_sign;
		int const			_signGrade;
		int const			_execGrade;
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif