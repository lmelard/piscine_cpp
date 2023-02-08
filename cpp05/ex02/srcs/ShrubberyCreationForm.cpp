/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelard <lmelard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:51:00 by lmelard           #+#    #+#             */
/*   Updated: 2023/02/08 17:58:16 by lmelard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm()
{
	std::cout << "Shrubbery Creation Form default constructor" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm(target, false, 145, 137), _target(target)
{
	std::cout << "Shrubbery Creation Form " << target << " default constructor" << std::endl;
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
	std::ofstream file;
	file.open(filename.c_str());
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
	return ;
}