/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 18:21:03 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.class.hpp"

// CONSTRUCTORS

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout
		<< "\tWrongAnimal Default Constructor called."
	<< std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout
		<< "\tWrongAnimal String Constructor called."
	<< std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout
		<< "\tWrongAnimal Deconstructor called."
	<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout
		<< "\tWrongAnimal Copy Constructor called."
	<< std::endl;
	*this = src;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	std::cout
		<< "\tWrongAnimal Copy Assigment Constructor called."
	<< std::endl;
	return *this;
}

// FUNCTIONS

std::string		WrongAnimal::getType() const
{
	return this->type;
}

void			WrongAnimal::makeSound() const
{
	std::cout
		<< "WrongAnimal sound..."
	<< std::endl;
	return;
}
