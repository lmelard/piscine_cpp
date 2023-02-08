/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:13:01 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 20:20:31 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :AForm()
{
	std::cout << "Presidential Pardon Form default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
	AForm(target, false, 25, 5), _target(target)
{
	std::cout << "Presidential Pardon Form " << target << " default constructor" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : 
	AForm(src), _target(src.getTarget())
{
	std::cout << "Presidential Pardon Form copy constructor called" << std::endl;
	*this = src;
	return ; 
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Presidential Pardon Form default destructor called" << std::endl;
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw TooLowExecute();
	if (this->getSign() == false)
		throw IsNotSigned();
	this->beExecuted();
}

void	PresidentialPardonForm::beExecuted(void) const
{
	std::cout << BYELLOW << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl << RESET;
	return ;
}

std::string const  PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "Robotomy copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}