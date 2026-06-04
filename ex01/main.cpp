/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 15:12:45 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/04 13:20:40 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	no_1("jweber", 60);
	std::cout << no_1 << std::endl;
	Bureaucrat	no_2("jpiquet", 90);
	std::cout << no_2 << std::endl;
	Form	form_01("Form", 70, 20);
	std::cout << form_01 << std::endl;
	no_2.signForm(form_01);
	std::cout << form_01 << std::endl;
	no_1.signForm(form_01);
	std::cout << form_01 << std::endl;
	return 0;
}

