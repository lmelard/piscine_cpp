/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:37:36 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 19:01:21 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name(""), _sign(false), _signGrade(150), _execGrade(150)
{
	std::cout << "AForm default constructor called" << std::endl;
	return ;
}

AForm::AForm(std::string const name, bool sign, int const signGrade, int const execGrade) : _name(name), _sign(sign), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "AForm " << name << " constructor called" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(AForm const & src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = src;
	return ;
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called" << std::endl;
	return ;
}

AForm & AForm::operator=(AForm const & rhs)
{
	std::cout << "AForm assignment operator called" << std::endl;
	if (this != &rhs)
		this->_sign = rhs.getSign();
	return (*this);
}

std::string const	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSign(void) const
{
	return (this->_sign);
}


int		AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}


int		AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

void	AForm::setSign(bool const sign)
{
	this->_sign = sign;
	return ;
}

void	AForm::beSigned(Bureaucrat const & buro)
{
	if (buro.getGrade() > this->getSignGrade())
		throw AForm::GradeTooLowException();
	else	
		this->setSign(true);
	return ;
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs)
{
	o << BBLUE << "Name: " << rhs.getName() << std::endl;
	o << "Signed: " << rhs.getSign() << std::endl;
	o << "Grade required to sign AForm: " << rhs.getSignGrade() << std::endl;
	o << "Grade required to execute AForm: " << rhs.getExecGrade() << std::endl << RESET;
	return o;
}
