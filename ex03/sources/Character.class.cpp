/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:37:54 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/04 19:42:58 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character() :_name("default") {}
Character::~Character() {}

Character::Character(std::string const & name)
{
	this->_name = name;
}

Character::Character(const Character& src)
{
	*this = src;
}

Character& Character::operator=(const Character &rhs)
{
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria* m)
{
	
}