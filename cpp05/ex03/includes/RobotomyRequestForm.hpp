/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:27:18 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 20:11:12 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <iostream>
# include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		virtual ~RobotomyRequestForm();

		virtual void	execute(Bureaucrat const & executor) const;
		std::string const getTarget(void) const;
		
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
	
		class RobotomizedException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("the Robotomy failed");
				}
		};
	private:
		std::string const _target;
		void beExecuted(void) const;
};

#endif