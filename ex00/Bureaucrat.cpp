/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 13:27:45 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/20 13:27:49 by gaducurt         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name), _grade(obj._grade)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
		this->_grade = obj._grade;
	return (*this);	
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::increment()
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decrement()
{
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat's grade too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat's grade too high");
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (os);
}

