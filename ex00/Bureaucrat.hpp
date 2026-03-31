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

class Bureaucrat
{
	private:
		const std::string _name;
		int		_grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat& operator=(const Bureaucrat &obl);
		~Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();
		class GradeTooHighException : public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				return ("Grade to hight");
			}
		};
		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char* what() const throw()
			{
				return ("Grade to low");
			}
		};
};

#endif

