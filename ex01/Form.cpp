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

Form::Form(const Form  &obj)
{
	*this = obj;
}

Form &Form::operator=(const Form &obj)
{
	if (this == &obj)
	{
		this->_signed = obj._signed;
	}
}

Form::~Form()
{
}

Form::Form(std::string name, int gradeToSign, int gradeToExecut) : _name(name), _gradeToSign(gradeToSign), _gradeToExecut(gradeToExecut)
{
}

void beSigned(Bureaucrat &obj)
{

}

void signForm(Bureaucrat &obj)
{

}

const char* Form::GradeTooHighException::what() const throw()
{
}

const char* Form::GradeTooLowException::what() const throw()
{

}

