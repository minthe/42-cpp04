/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/14 13:38:33 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.class.hpp"

// CONSTRUCTORS

Brain::Brain()
{
	std::cout
		<< "\tBrain Default Constructor called."
	<< std::endl;
}

Brain::Brain(const Brain& src)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	std::cout
		<< "\tBrain Copy Constructor called."
	<< std::endl;
	*this = src;
}

Brain&	Brain::operator=(const Brain& rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	std::cout
		<< "\tBrain Copy Assigment Constructor called."
	<< std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout
		<< "\tBrain Deconstructor called."
	<< std::endl;
}

// FUNCTIONS
