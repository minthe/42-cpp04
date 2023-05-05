/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:37:54 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/05 20:14:48 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.class.hpp"

Character::Character() : _name("default")
{
	_init_class();
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_m[i] != NULL)
		{
			delete _m[i];
			_m[i] = NULL;
		}
	}
}

Character::Character(std::string const & name) : _name(name)
{
	_init_class();
}

Character::Character(const Character& src) : ICharacter(src)
{
	for (int i = 0; i < 4; i++)
		_m[i] = src._m[i]->clone();
	_name = src.getName();
	_mtrash = NULL;
}

Character& Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_m[i] != NULL)
			{
				delete _m[i];
				_m[i] = NULL;
			}
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
		_trash(m);
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _m[idx] != NULL)
	{
		_trash(_m[idx]);
		_m[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _m[idx])
	{
		_m[idx]->use(target);
		return ;
	}
	std::cout << "\033[34mnothing to do\033[0m" << std::endl;
}

void	Character::_trash(AMateria* m)
{
	if (_mtrash != NULL)
	{
		delete _mtrash;
		_mtrash = NULL;
	}
	_mtrash = m;
}

void	Character::_init_class()
{
	for (int i = 0; i < 4; i++)
		_m[i] = NULL;
	_mtrash = NULL;
}
