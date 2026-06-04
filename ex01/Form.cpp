/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:12:17 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/04 13:31:57 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecut(1)
{
}

Form::Form(const Form  &obj) : _name(obj._name), _signed(obj._signed), _gradeToSign(obj._gradeToSign), _gradeToExecut(obj._gradeToExecut)
{
}

Form &Form::operator=(const Form &obj)
{
	if (this != &obj)
		this->_signed = obj._signed;
	return (*this);
}

Form::~Form()
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExecut) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecut(gradeToExecut)
{
}

void Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() <= this->_gradeToSign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low for sign");
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getIsSigned() const
{
	return (this->_signed);
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExe() const
{
	return (this->_gradeToExecut);
}

std::ostream& operator<<(std::ostream &os, const Form &obj)
{
	if (obj.getIsSigned())
		os << "name: " << obj.getName() << "\ngrade to sign:" << obj.getGradeToSign() << "\ngrade to execut:" << obj.getGradeToExe() << "\nis signed: true" << std::endl;
	else
		os << "name: " << obj.getName() << "\ngrade to sign:" << obj.getGradeToSign() << "\ngrade to execut:" << obj.getGradeToExe() << "\nis signed: false" << std::endl;
	return (os);
}

