/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 18:16:59 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.class.hpp"
#include "Animal.class.hpp"

// CONSTRUCTORS

Cat::Cat() : Animal("Cat")
{
	std::cout
		<< "\t\tCat Default Constructor called."
	<< std::endl;
}

Cat::~Cat()
{
	std::cout
		<< "\t\tCat Deconstructor called."
	<< std::endl;
}

Cat::Cat(const Cat& src) : Animal()
{
	std::cout
		<< "\t\tCat Copy Constructor called."
	<< std::endl;
	*this = src;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	std::cout
		<< "\t\tCat Copy Assigment Constructor called."
	<< std::endl;
	return *this;
}

// FUNCTIONS

void			Cat::makeSound() const
{
	std::cout
		<< "Cat sound..."
	<< std::endl;
	return;
}
