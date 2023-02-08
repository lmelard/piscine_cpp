/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:51:57 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 21:57:58 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & src);
		~Intern();

		Intern & operator=(Intern const & rhs);
		
		AForm* makeform(std::string const formName, std::string const formTarget);
		
		class WrongFormNameException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("this form does not exist !");
				}
		};
		AForm*	_robotomy(std::string const formTarget);
		AForm*	_presidential(std::string const formTarget);
		AForm*	_shrubbery(std::string const formTarget);
	
	private:
};

#endif