/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:45:08 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/04 11:39:26 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj)
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if (this != &obj)
		this->_signed = obj._signed;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->_signed == false)
		throw FormUnsignedException();
	if (this->_gradeToExecut <= executor.getGrade())
		throw GradeTooLowExecutException();
	std::srand(std::time(0));
    if (std::rand() % 2 == 0)
		std::cout << BLUE << "Bbrrrr, " << _target << " has been robotomized" << RESET << std::endl;
	else
		std::cout << BLUE << "Robotomy of " << _target << " has been failed" << RESET << std::endl;
}
