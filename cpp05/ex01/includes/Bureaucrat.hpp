/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:10:15 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 14:01:33 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

# define RESET		"\033[0m"
# define BRED		"\033[1;31m"   
# define BBLUE		"\033[1;34m"  
# define BYELLOW	"\033[1;33m"
# define BGREEN		"\033[1;92m"
# define PURPLE		"\033[0;35m"
# define CYAN		"\033[0;36m"
# define YELLOW		"\033[0;33m"
# define GREEN		"\033[0;32m"

class Form;

class Bureaucrat
{
	public:
	
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Bureaucrat: Grade too high !");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Bureaucrat: Grade too low !");
				}
		};
		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);
		
		std::string const	getName(void) const;
		int					getGrade(void) const;

		void	increaseGrade(void);
		void	decreaseGrade(void);

		void	signForm(Form & form) const;
	
	private:
	
		std::string	const _name;
		int	_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
