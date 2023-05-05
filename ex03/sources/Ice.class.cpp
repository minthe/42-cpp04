/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:19:13 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/05 14:59:31 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/AMateria.class.hpp"
#include "../includes/Ice.class.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice& src)
{
	*this = src;
}

Ice& Ice::operator=(const Ice &rhs)
{
	return *this;
}

Ice* Ice::clone() const
{
	Ice* ptrIce;
	ptrIce = new Ice;
	return ptrIce;
}

void Ice::use(ICharacter &target)
{
	std::cout
		<< "* shoots an ice bolt at "
		<< target.getName() << " *"
	<< std::endl;
}
