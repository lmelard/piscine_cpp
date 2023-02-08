/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:46:31 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 17:56:08 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const name);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		virtual ~ShrubberyCreationForm(void);

		virtual void	execute(Bureaucrat const & executor) const;

		class OpeningFileException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("error couldn't open file !");
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
		void			beExecuted(void) const;
	
	private:
		std::string const	_target;
};

#endif
