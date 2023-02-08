/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:46:31 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 19:31:43 by lmelard          ###   ########.fr       */
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
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		virtual ~ShrubberyCreationForm(void);

		virtual void	execute(Bureaucrat const & executor) const;
		std::string const getTarget(void) const;

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

		class OpeningFileException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("error couldn't open file !");
				}
		};
		
	private:
		std::string	const _target;
		void	beExecuted(void) const;
};

// std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & rhs);

#endif
