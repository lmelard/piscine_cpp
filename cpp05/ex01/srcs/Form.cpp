/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:37:36 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 13:58:59 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _sign(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form default constructor called" << std::endl;
	return ;
}

Form::Form(std::string const name, bool sign, int const signGrade, int const execGrade) : _name(name), _sign(sign), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form " << name << " constructor called" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
	return ;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
	return ;
}

Form & Form::operator=(Form const & rhs)
{
	std::cout << "Form assignment operator called" << std::endl;
	if (this != &rhs)
		this->_sign = rhs.getSign();
	return (*this);
}

std::string const	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSign(void) const
{
	return (this->_sign);
}


int		Form::getSignGrade(void) const
{
	return (this->_signGrade);
}


int		Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

void	Form::setSign(bool const sign)
{
	this->_sign = sign;
	return ;
}

void	Form::beSigned(Bureaucrat const & buro)
{
	if (buro.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else	
		this->setSign(true);
	return ;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	o << BBLUE << "Form name: " << rhs.getName() << std::endl;
	o << "Signed: " << rhs.getSign() << std::endl;
	o << "Grade required to sign form: " << rhs.getSignGrade() << std::endl;
	o << "Grade required to execute form: " << rhs.getExecGrade() << std::endl << RESET;
	return o;
}
