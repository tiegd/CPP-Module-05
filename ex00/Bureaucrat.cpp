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

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this != &obj)
	{
		this->_grade = obj._grade;
		// this->_name = obj._name;
	}
	return (*this);	
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	try
	{
		if (this->_grade < 1)
			throw GradeTooHighException::exception();
		else if (this->_grade > 150)
			throw GradeTooLowException::exception();
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
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
	// std::cout << "increment" << std::endl;
	try
	{
		if (this->_grade > 1)
			this->_grade--;
		// std::cout << "grade = " << this->_grade << std::endl;
		// if (this->_grade < 1)
		else
			throw GradeTooHighException::exception();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::decrement()
{
	try
	{
		this->_grade++;
		// std::cout << "grade = " << this->_grade << std::endl;
		if (this->_grade > 150)
			throw GradeTooLowException::exception();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;	
	}
}

