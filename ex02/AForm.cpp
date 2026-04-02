/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:12:17 by gaducurt          #+#    #+#             */
/*   Updated: 2026/04/02 13:28:55 by gaducurt         ###   ########lyon.fr   */
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
	else
		throw GradeTooLowException();
}

void AForm::signForm(Bureaucrat &obj)
{
	try
	{
		this->beSigned(obj);
		std::cout << obj.getName() << " signed " << this->_name << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << obj.getName() << " couldn’t sign " << this->_name << " because " << e.what() << std::endl;
	}
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade to high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade to low for sign");
}

std::string AForm::getName() const
{
	return (this->_name);
}

std::string AForm::getStatus() const //checker avec un bool en retour
{
	if (this->_signed)
		return ("true");
	return ("false");
}

int AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int AForm::getGradeToExe() const
{
	return (this->_gradeToExecut);
}

std::ostream& operator<<(std::ostream &os, const AForm &obj)
{
	os << "name: " << obj.getName() << "\ngrade to sign:" << obj.getGradeToSign() << "\ngrade to execut:" << obj.getGradeToExe() << "\nis signed:" << obj.getStatus();
	return (os);
}

