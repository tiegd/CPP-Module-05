/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 15:12:45 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/04 13:38:45 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat	no_1("jweber", 4);
	Bureaucrat	no_2("lud-adam", 71);
	AForm* form_01 = new PresidentialPardonForm("Flantier");
	AForm* form_02 = new ShrubberyCreationForm("Bramard");
	AForm* form_03 = new RobotomyRequestForm("Larmina");

	AForm* form_04 = new PresidentialPardonForm("Herman");
	AForm* form_05 = new ShrubberyCreationForm("Bill");
	AForm* form_06 = new RobotomyRequestForm("Dolores");

	no_1.signForm(*form_01);
	no_2.signForm(*form_01);
	no_1.signForm(*form_02);
	no_1.signForm(*form_03);
	std::cout << std::endl;
	no_2.signForm(*form_04);
	no_2.signForm(*form_05);
	no_2.signForm(*form_06);
	
	std::cout << std::endl;
	no_1.executeForm(*form_01);
	std::cout << std::endl;
	no_1.executeForm(*form_02);
	std::cout << std::endl;
	no_1.executeForm(*form_03);
	std::cout << std::endl;
	no_2.executeForm(*form_04);
	std::cout << std::endl;
	no_2.executeForm(*form_05);
	std::cout << std::endl;
	no_2.executeForm(*form_06);
	delete form_01;
	delete form_02;
	delete form_03;
	delete form_04;
	delete form_05;
	delete form_06;
	return 0;
}
