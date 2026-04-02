/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:45:17 by gaducurt          #+#    #+#             */
/*   Updated: 2026/04/02 15:45:20 by gaducurt         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOM__
#define __ROBOTOM__

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		RobotomyRequestForm& operator=(const RobotomyRequestForm &obj);
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();
		void execute(Bureaucrat const &executor) const;
};

#endif

