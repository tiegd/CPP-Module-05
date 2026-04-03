/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 15:12:45 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/20 15:12:47 by gaducurt         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	no_1("jweber", 60);
	std::cout << no_1 << "\n" << std::endl;
	Bureaucrat	no_2("jpiquet", 90);
	std::cout << no_2 << "\n" << std::endl;
	Form	form_01("Form", 70, 20);
	std::cout << form_01 << "\n" << std::endl;
	form_01.signForm(no_2);
	std::cout << form_01 << "\n" << std::endl;
	form_01.signForm(no_1);
	std::cout << form_01 << "\n" << std::endl;
}

