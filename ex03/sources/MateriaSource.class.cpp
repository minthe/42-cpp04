/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:41:06 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/05 11:01:25 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.class.hpp"

MateriaSource::MateriaSource() {}
MateriaSource::~MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource & src)
{
	*this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs)
{
	return *this;
}

void MateriaSource::learnMateria(AMateria *)
{
	
}

AMateria*	MateriaSource::createMateria(const std::string &type)
{
	
}
