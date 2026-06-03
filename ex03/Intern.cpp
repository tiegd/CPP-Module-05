/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:01:28 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/03 15:59:27 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

Intern::Intern()
{   
}

Intern::Intern(const Intern &obj)
{
	(void) obj;
}

Intern &Intern::operator=(const Intern &obj)
{
	(void) obj;
	return (*this);
}

Intern::~Intern()
{
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	AForm* form;
	if (name.compare("PresidentialPardonForm") == 0)
		form = new PresidentialPardonForm(target);
	else if (name.compare("ShrubberyCreationForm") == 0)
		form = new ShrubberyCreationForm(target);
	else if (name.compare("RobotomyRequestForm") == 0)
		form = new RobotomyRequestForm(target);
	else
	{
		std::cout << "The form name does not exist" << std::endl;
		return NULL;
	}
	std::cout << "Intern creates " << name << std::endl;
	return (form);
}
