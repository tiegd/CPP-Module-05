/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:12:17 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/04 16:19:12 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecut(1)
{
}

AForm::AForm(const AForm  &obj) : _name(obj._name), _signed(obj._signed), _gradeToSign(obj._gradeToSign), _gradeToExecut(obj._gradeToExecut)
{
}

AForm &AForm::operator=(const AForm &obj)
{
	if (this != &obj)
		this->_signed = obj._signed;
	return (*this);
}

AForm::~AForm()
{
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecut) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecut(gradeToExecut)
{
}

void AForm::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() <= this->_gradeToSign)
		this->_signed = true;
	else if (getIsSigned())
		throw AlreadySignedException();
	else
		throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low for sign");
}

const char* AForm::FormUnsignedException::what() const throw()
{
	return ("The form is not signed");
}

const char* AForm::GradeTooLowExecutException::what() const throw()
{
	return ("Grade too low for execut");
}

const char* AForm::AlreadySignedException::what() const throw()
{
	return ("The form is already signed");
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getIsSigned() const
{
	if (this->_signed)
		return (true);
	return (false);
}

int AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int AForm::getGradeToExe() const
{
	return (this->_gradeToExecut);
}

void AForm::setSign(bool val)
{
	_signed = val;
}

std::ostream& operator<<(std::ostream &os, const AForm &obj)
{
	if (obj.getIsSigned())
		os << "name: " << obj.getName() << "\ngrade to sign:" << obj.getGradeToSign() << "\ngrade to execut:" << obj.getGradeToExe() << "\nis signed: true" << std::endl;
	else
		os << "name: " << obj.getName() << "\ngrade to sign:" << obj.getGradeToSign() << "\ngrade to execut:" << obj.getGradeToExe() << "\nis signed: false" << std::endl;
	return (os);
}
