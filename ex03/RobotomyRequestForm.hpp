/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:45:17 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/02 11:18:55 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOM__
#define __ROBOTOM__

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;
		RobotomyRequestForm& operator=(const RobotomyRequestForm &obj);
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		void execute(Bureaucrat const &executor) const;
};

#endif

