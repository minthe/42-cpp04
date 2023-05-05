/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:18:05 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/05 16:25:37 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/AMateria.class.hpp"
#include "../includes/Cure.class.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure& src) : AMateria(src)
{
	*this = src;
}

Cure& Cure::operator=(const Cure &rhs)
{
	return *this;
}

Cure* Cure::clone() const
{
	Cure* ptrCure;
	ptrCure = new Cure;
	return ptrCure;
}

void Cure::use(ICharacter &target)
{
	std::cout
		<< "* heals "
		<< target.getName() << "'s wounds *"
	<< std::endl;
}
