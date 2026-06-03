/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:01:21 by gaducurt          #+#    #+#             */
/*   Updated: 2026/06/03 15:52:08 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN__
#define __INTERN__

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    private:
		Intern(const Intern &obj);
		Intern& operator=(const Intern &obj);
    public:
        Intern();
        ~Intern();
        AForm* makeForm(std::string name, std::string target);
};

#endif
