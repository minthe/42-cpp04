/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:34:01 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/05 14:46:32 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/AMateria.class.hpp"

AMateria::AMateria() {}
AMateria::~AMateria() {}
AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria& src) // canonical copy constructor
{
	*this = src;
}

AMateria&	AMateria::operator=(const AMateria &rhs) // canonical assignment constructor
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

