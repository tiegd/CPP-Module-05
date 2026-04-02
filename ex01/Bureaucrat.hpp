/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:35:36 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/19 15:35:43 by gaducurt         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT__
#define __BUREAUCRAT__

#include <string>
#include <exception>
#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int		_grade;
		Bureaucrat& operator=(const Bureaucrat &obj);
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &obj);
		~Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif

