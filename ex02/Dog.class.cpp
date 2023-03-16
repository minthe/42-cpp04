/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/17 00:10:33 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.class.hpp"

// CONSTRUCTORS

Dog::Dog()
{
	this->_type = "Dog";
	std::cout
		<< "\t\t\tDog Default Constructor called."
	<< std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& src) : AAnimal()
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain();
		*this->_brain = *src._brain;
	}
	std::cout
		<< "\t\t\tDog Copy Constructor called."
	<< std::endl;
	*this = src;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*this->_brain = *rhs._brain;
	}
	std::cout
		<< "\t\t\tDog Copy Assigment Constructor called."
	<< std::endl;
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout
		<< "\t\t\tDog Deconstructor called."
	<< std::endl;
}

// FUNCTIONS

void			Dog::makeSound() const
{
	std::cout
		<< "Dog sound..."
	<< std::endl;
	return;
}

void	Dog::getIdea(unsigned const int number) const
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

void	Dog::setIdea(unsigned const int number, std::string const idea)
{
	if (number <= 100)
	{
		this->_brain->setIdea(number, idea);
		return;
	}
	std::cout << "out of capacity" << std::endl;
	return;
}
