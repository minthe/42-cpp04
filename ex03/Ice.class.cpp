/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:19:13 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/04 13:46:40 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.class.hpp"
#include "Ice.class.hpp"

Ice::Ice()
{
	 this->_type = "ice";
}

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
