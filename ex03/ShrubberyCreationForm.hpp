/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:45:39 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/02 11:18:58 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERY__
#define __SHRUBBERY__

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &obj);
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		void execute(Bureaucrat const &executor) const;
};

#endif

