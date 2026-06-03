/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:44:34 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/02 11:40:44 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <fcntl.h>

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj)
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this != &obj)
		this->_signed = obj._signed;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->_signed == false)
		throw FormUnsignedException();
	if (this->_gradeToExecut <= executor.getGrade())
		throw GradeTooLowExecutException();
	// std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

