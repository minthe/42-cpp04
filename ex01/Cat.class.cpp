/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/15 08:50:17 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.class.hpp"
#include "Animal.class.hpp"
#include "Brain.class.hpp"

// CONSTRUCTORS

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout
		<< "\t\tCat Default Constructor called."
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
	{
		this->_type = rhs._type;
		this->_brain = new Brain();
		*this->_brain = *rhs._brain;
	}
	std::cout
		<< "\t\tCat Copy Assigment Constructor called."
	<< std::endl;
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout
		<< "\t\tCat Deconstructor called."
	<< std::endl;
}

// FUNCTIONS

void			Cat::makeSound() const
{
	std::cout
		<< "Cat sound..."
	<< std::endl;
	return;
}
