/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 17:51:53 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.class.hpp"

// CONSTRUCTORS

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout
		<< "\t\tWrongCat Default Constructor called."
	<< std::endl;
}

WrongCat::~WrongCat()
{
	std::cout
		<< "\t\tWrongCat Deconstructor called."
	<< std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal()
{
	std::cout
		<< "\t\tWrongCat Copy Constructor called."
	<< std::endl;
	*this = src;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	std::cout
		<< "\t\tWrongCat Copy Assigment Constructor called."
	<< std::endl;
	return *this;
}

// FUNCTIONS

void		WrongCat::makeSound() const
{
	std::cout
		<< "WrongCat sound..."
	<< std::endl;
	return;
}