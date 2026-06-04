/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:12:24 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/04 16:24:25 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM__
#define __AFORM__

#include <string>
#include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecut;
		AForm& operator=(const AForm &obj);
	public:
		AForm();
		AForm(const AForm &obj);
		virtual ~AForm();
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
		class FormUnsignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();

		};
		class GradeTooLowExecutException : public std::exception
		{
			public:
				virtual const char* what() const throw();

		};
		class AlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();

		};
		void			beSigned(Bureaucrat &obj);
		std::string		getName() const;
		bool			getIsSigned() const;
		int				getGradeToSign() const;
		int				getGradeToExe() const;
		void			setSign(bool val);
		virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);

#endif

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"
