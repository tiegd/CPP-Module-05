/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:44:54 by gaducurt          #+#    #+#             */
/*   Updated: 2026/04/02 15:44:56 by gaducurt         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOM__
#define __ROBOTOM__

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		PresidentialPardonForm& operator=(const PresidentialPardonForm &obj);
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		~PresidentialPardonForm();
		void execute(Bureaucrat const &executor) const;
};

#endif

