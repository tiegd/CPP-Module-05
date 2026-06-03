/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:44:54 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/02 11:18:49 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIAL__
#define __PRESIDENTIAL__

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
		PresidentialPardonForm& operator=(const PresidentialPardonForm &obj);
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		~PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		void execute(Bureaucrat const &executor) const;
};

#endif

