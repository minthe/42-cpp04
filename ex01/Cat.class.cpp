/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/17 00:02:48 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.class.hpp"
#include "Animal.class.hpp"
#include "Brain.class.hpp"

// CONSTRUCTORS

Cat::Cat()
{
	this->_type = "Cat";
	std::cout
		<< "\t\t\tCat Default Constructor called."
	<< std::endl;
	this->_brain = new Brain();
}


Cat::Cat(const Cat& src) : Animal()
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain();
		*this->_brain = *src._brain;
	}
	std::cout
		<< "\t\t\tCat Copy Constructor called."
	<< std::endl;
	*this = src;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*this->_brain = *rhs._brain;
	}
	std::cout
		<< "\t\t\tCat Copy Assigment Constructor called."
	<< std::endl;
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout
		<< "\t\t\tCat Deconstructor called."
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

void	Cat::getIdea(unsigned const int number) const
{
	if (number <= 100)
	{
		if (this->_brain->getIdea(number).empty())
			std::cout << this->getType() << " " << number << ": empty" << std::endl;
		else
			std::cout << this->getType() << " " << number << ":" << this->_brain->getIdea(number) << std::endl;
	}
	else
		std::cout << "out of capacity" << std::endl;
	return;
}

void	Cat::setIdea(unsigned const int number, std::string const idea)
{
	if (number <= 100)
	{
		this->_brain->setIdea(number, idea);
		return;
	}
	std::cout << "out of capacity" << std::endl;
	return;
}
