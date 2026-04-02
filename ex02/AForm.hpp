/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:12:24 by gaducurt          #+#    #+#             */
/*   Updated: 2026/04/02 13:29:10 by gaducurt         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM__
#define __AFORM__

#include <string>
#include "Bureaucrat.hpp"

class AForm
{
	protected:
		const std::string	_name;
		bool			_signed;
		const int		_gradeToSign;
		const int		_gradeToExecut;
		AForm& operator=(const AForm &obj);
	public:
		AForm();
		AForm(const AForm &obj);
		~AForm();
		AForm(std::string name, int gradeToSing, int gradeToExecut);
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
		virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);

#endif
