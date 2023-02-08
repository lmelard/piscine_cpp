/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:51:00 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 19:53:54 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm()
{
	std::cout << "Shrubbery Creation Form default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : 
	AForm(target, false, 145, 137), _target(target)
{
	std::cout << "Shrubbery Creation Form " << target << " default constructor" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : 
	AForm(src), _target(src.getTarget())
{
	std::cout << "Shrubbery Creation Form copy constructor called" << std::endl;
	*this = src;
	return ; 
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery Creation Form destructor called" << std::endl;
	return ;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw TooLowExecute();
	if (this->getSign() == false)
		throw IsNotSigned();
	this->beExecuted();
}

void	ShrubberyCreationForm::beExecuted(void) const
{
	std::string	filename = this->_target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (!file.is_open())
		throw OpeningFileException();
	file << "          ." << std::endl;
	file << "         / \\ " << std::endl;
	file << "        /   \\ " << std::endl;
	file << "       /     \\ " << std::endl;
	file << "      /       \\ " << std::endl;
	file << "     /         \\ " << std::endl;
	file << "    /___________\\ " << std::endl;
	file << "   (_____________) " << std::endl;
	file.close();
	std::cout << BYELLOW << "file created !" << std::endl << RESET;
	return ;
}

std::string const  ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	std::cout << "Shrubbery copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}

// std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & rhs)
// {
// 	o << BBLUE << "Name: " << rhs.getName() << std::endl;
// 	o << "Signed: " << rhs.getSign() << std::endl;
// 	o << "Grade required to sign AForm: " << rhs.getSignGrade() << std::endl;
// 	o << "Grade required to execute AForm: " << rhs.getExecGrade() << std::endl << RESET;
// 	return o;
// }
