/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:19:13 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/05 20:49:40 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/AMateria.class.hpp"
#include "../includes/Ice.class.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice& src) : AMateria(src)
{
	*this = src;
}

Ice& Ice::operator=(const Ice &rhs)
{
	(void)rhs;
	return *this;
}

AMateria* Ice::clone() const
{
	Ice* ptrIce;
	ptrIce = new Ice;
	return ptrIce;
}
