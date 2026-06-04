/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:45:29 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/04 11:39:47 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
		this->_signed = obj._signed;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->_signed == false)
		throw FormUnsignedException();
	if (this->_gradeToExecut <= executor.getGrade())
		throw GradeTooLowExecutException();
	std::string name = _target + "_shrubbery";
	std::ofstream file;
	file.open(name.c_str());
	file << "       _-_\n    /~~   ~~\'" << "\n /~~         ~~\\" << '\n' << "{               }" << '\n' << " \\  _-     -_  /\n   ~  \\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\";
	file.close();
}
