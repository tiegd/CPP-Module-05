/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 15:12:45 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/03 16:00:31 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern		paul;
	Bureaucrat	no_1("jweber", 4);
	AForm* form_01 = paul.makeForm("PresidentialPardonForm", "Flantier");
	AForm* form_02 = paul.makeForm("ShrubberyCreationForm", "Bramard");
	AForm* form_03 = paul.makeForm("RobotomyRequestForm", "Larmina");

	form_01->signForm(no_1);
	form_02->signForm(no_1);
	form_03->signForm(no_1);
	std::cout << std::endl;

	no_1.executeForm(*form_01);
	std::cout << std::endl;
	no_1.executeForm(*form_02);
	std::cout << std::endl;
	no_1.executeForm(*form_03);
	std::cout << std::endl;
	delete form_01;
	delete form_02;
	delete form_03;
}
