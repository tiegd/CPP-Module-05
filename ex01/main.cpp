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

int main()
{
	try
	{
		Bureaucrat	no_1("jweber", 60);
		std::cout << no_1 << std::endl;
		Bureaucrat	no_2("jpiquet", 90);
		std::cout << no_2 << std::endl;
		no_2 = no_1;
		std::cout << no_2 << std::endl;
		for (int i = 0; i < 70; i++)
			no_1.increment();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	
}

