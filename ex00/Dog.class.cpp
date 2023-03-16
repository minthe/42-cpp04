/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/17 00:14:24 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.class.hpp"

// CONSTRUCTORS

Dog::Dog()
{
	this->type = "Dog";
	std::cout
		<< "\t\tDog Default Constructor called."
	<< std::endl;
}

Dog::~Dog()
{
	std::cout
		<< "\t\tDog Deconstructor called."
	<< std::endl;
}

Dog::Dog(const Dog& src) : Animal()
{
	std::cout
		<< "\t\tDog Copy Constructor called."
	<< std::endl;
	*this = src;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	std::cout
		<< "\t\tDog Copy Assigment Constructor called."
	<< std::endl;
	return *this;
}

// FUNCTIONS

void			Dog::makeSound() const
{
	std::cout
		<< "Dog sound..."
	<< std::endl;
	return;
}
