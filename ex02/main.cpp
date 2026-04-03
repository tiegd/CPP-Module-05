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
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	no_1("jweber", 60);
	std::cout << no_1 << "\n" << std::endl;
	AForm* form_01 = new PresidentialPardonForm();
	std::cout << form_01 << "\n" << std::endl;
	form_01->signForm(no_1);
	std::cout << form_01 << "\n" << std::endl;
}

