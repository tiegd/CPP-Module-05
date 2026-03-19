/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:35:36 by gaducurt          #+#    #+#             */
/*   Updated: 2026/03/19 15:35:43 by gaducurt         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT__
#define __BUREAUCRAT__

#include <string>

class Bureacrat
{
	private:
		const	std::sting _name;
		int	grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat& operator=(const Bureaucrat &obl);
		~Bureaucrat();
		getName();
		getGrade();
}

#endif

