/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/15 08:48:48 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"

// CONSTRUCTORS

Animal::Animal() : _type("Animal")
{
	std::cout
		<< "\t\tAnimal Default Constructor called."
	<< std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout
		<< "\t\tAnimal String Constructor called."
	<< std::endl;
}

Animal::~Animal()
{
	std::cout
		<< "\t\tAnimal Deconstructor called."
	<< std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout
		<< "\t\tAnimal Copy Constructor called."
	<< std::endl;
	*this = src;
}

Animal&	Animal::operator=(const Animal& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout
		<< "\t\tAnimal Copy Assigment Constructor called."
	<< std::endl;
	return *this;
}

// FUNCTIONS

std::string		Animal::getType() const
{
	return this->_type;
}

void			Animal::makeSound() const
{
	std::cout
		<< "Animal sound..."
	<< std::endl;
	return;
}
