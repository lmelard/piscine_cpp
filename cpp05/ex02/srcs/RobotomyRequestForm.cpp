/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:30:14 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 20:20:57 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :AForm()
{
	std::cout << "Robotomy Request Form default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
	AForm(target, false, 72, 45), _target(target)
{
	std::cout << "Robotomy Request Form " << target << " default constructor" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : 
	AForm(src), _target(src.getTarget())
{
	std::cout << "Robotomy Request Form copy constructor called" << std::endl;
	*this = src;
	return ; 
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Robotomy Request Form default destructor called" << std::endl;
	return ;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw TooLowExecute();
	if (this->getSign() == false)
		throw IsNotSigned();
	this->beExecuted();
}

void	RobotomyRequestForm::beExecuted(void) const
{
	static int time = 1;
	time++;
	std::cout << " * Drilling noises * " << std::endl;
	if (time % 2 == 0)
		std::cout << BYELLOW << this->_target << " has been robotomized" << std::endl << RESET;
	else
		throw RobotomizedException();
	return ;
}

std::string const  RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "Robotomy copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}