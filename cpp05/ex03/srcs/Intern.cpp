/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:52:37 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 22:01:51 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
	return ;
}

Intern::Intern(Intern const & src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	(void)src;
	return ;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
	return ;
}

AForm*	Intern::_robotomy(std::string const formTarget)
{
	return (new RobotomyRequestForm(formTarget));
}

AForm*	Intern::_shrubbery(std::string const formTarget)
{
	return (new ShrubberyCreationForm(formTarget));
}

AForm*	Intern::_presidential(std::string const formTarget)
{
	return (new PresidentialPardonForm(formTarget));
}

AForm* Intern::makeform(std::string const formName, std::string const formTarget)
{
	std::string tab[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	AForm* (Intern::*ptr[3])(std::string const formTarget) = {&Intern::_robotomy, &Intern::_presidential, &Intern::_shrubbery};
	for (int i = 0; i < 3; i++)
	{
		if (formName.compare(tab[i]) == 0)
		{
			return (this->*ptr[i])(formTarget);
		}
	}
	throw WrongFormNameException();
}
