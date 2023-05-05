/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/05 17:20:10 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.class.hpp"

// CONSTRUCTORS

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout
		<< "\t\tAAnimal Default Constructor called."
	<< std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout
		<< "\t\tAAnimal String Constructor called."
	<< std::endl;
}

AAnimal::~AAnimal()
{
	std::cout
		<< "\t\tAAnimal Deconstructor called."
	<< std::endl;
}

AAnimal::AAnimal(const AAnimal& src)
{
	std::cout
		<< "\t\tAAnimal Copy Constructor called."
	<< std::endl;
	*this = src;
}

AAnimal&	AAnimal::operator=(const AAnimal& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout
		<< "\t\tAAnimal Copy Assigment Constructor called."
	<< std::endl;
	return *this;
}

// FUNCTIONS

std::string		AAnimal::getType() const
{
	return this->_type;
}

// void			AAnimal::makeSound() const
// {
// 	std::cout
// 		<< "AAnimal sound..."
// 	<< std::endl;
// 	return;
// }
