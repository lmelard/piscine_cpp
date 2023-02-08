/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:12:04 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 17:47:20 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
**	si une exception est levée (lancée) dans le constructeur d'une classe, 
**	l'objet n'est pas instancié et le contrôle est immédiatement transféré 
**	au premier bloc catch associé qui gère cette exception
*/

Bureaucrat::Bureaucrat() : _name(), _grade(150)
{
	std::cout << "bureaucrat default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	std::cout << "bureaucrat " << name << " construtor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name)
{
	std::cout << "bureaucrat copy constructor called" << std::endl;
	*this = src;
	return;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "bureaucrat destructor called" << std::endl;
	return ;
}

std::string const Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

/* 
**	si l'exception "GradeTooLowException" est levée (lancée) dans le bloc if,
**	le reste du code dans la fonction "decreaseGrade" n'est pas exécuté 
**	et le contrôle est immédiatement transféré au premier bloc catch associé 
**	qui gère cette exception.
*/

void	Bureaucrat::decreaseGrade(void)
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	return;
}

void	Bureaucrat::increaseGrade(void)
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "bureaucrat assignment operator called" << std::endl;
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return (*this);
}

void	Bureaucrat::signForm(AForm & form) const
{
	try
	{
		form.beSigned(*this);
	}
	catch (const std::exception& e)
	{
		std::cout << BRED << this->_name << " couldn't sign ";
		std::cout << form.getName() << " because " << e.what();
		std::cout << "." << std::endl << RESET;
		return ;
	}
		std::cout << BGREEN << this->_name << " signed " << form.getName() << std::endl << RESET;
	return ;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
}	
