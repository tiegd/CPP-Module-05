/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:12:17 by gaducurt          #+#    #+#             */
/*   Updated: 2026/04/01 15:12:19 by gaducurt         ###   ########lyon.fr   */
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

void Form::signForm(Bureaucrat &obj)
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

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade to high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade to low for sign");
}

std::string Form::getName() const
{
	return (this->_name);
}

std::string Form::getStatus() const //checker avec un bool en retour
{
	if (this->_signed)
		return ("true");
	return ("false");
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
	os << "name: " << obj.getName() << "\ngrade to sign:" << obj.getGradeToSign() << "\ngrade to execut:" << obj.getGradeToExe() << "\nis signed:" << obj.getStatus();
	return (os);
}

