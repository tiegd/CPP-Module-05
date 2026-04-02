/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:12:24 by gaducurt          #+#    #+#             */
/*   Updated: 2026/04/01 15:12:27 by gaducurt         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM__
#define __FORM__

#include <string>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool			_signed;
		const int		_gradeToSign;
		const int		_gradeToExecut;
		Form& operator=(const Form &obj);
	public:
		Form();
		Form(const Form &obj);
		~Form();
		Form(std::string name, int gradeToSing, int gradeToExecut);
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
		void beSigned(Bureaucrat &obj);
		void signForm(Bureaucrat &obj);
		std::string getName() const;
		std::string getStatus() const;
		int getGradeToSign() const;
		int getGradeToExe() const;
};

std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif
