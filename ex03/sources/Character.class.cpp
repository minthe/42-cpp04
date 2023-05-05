/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:37:54 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/05 13:34:12 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.class.hpp"

Character::Character() : _name("default")
{
	for (int i = 0; i < 4; i++)
		_m[i] = NULL;
	_mtrash = NULL;
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_m[i])
			delete _m[i];
	}
	if (_mtrash)
		delete _mtrash;
}

Character::Character(std::string const & name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_m[i] = NULL;
	_mtrash = NULL;
}

Character::Character(const Character& src) // TODO check for Dragos *this = src
{
	for (int i = 0; i < 4; i++)
		_m[i] = src._m[i]->clone();
	_name = src.getName();
	_mtrash = NULL;
}

Character& Character::operator=(const Character &rhs) // deep copy
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_m[i])
				delete _m[i];
			_m[i] = rhs._m[i]->clone();
		}
		_name = rhs.getName();
	}
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4)
	{
		if (_m[i] == NULL)
		{
			_m[i] = m;
			break ;
		}
		i++;
	}
	if (i == 4)
		trash(m);
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _m[idx])
	{
		trash(_m[idx]);
		_m[idx] = NULL;
	}
}

void	Character::trash(AMateria* m)
{
	if (_mtrash)
		delete _mtrash;
	_mtrash = m;
}
