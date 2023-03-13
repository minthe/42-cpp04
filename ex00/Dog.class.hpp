/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 18:14:50 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

#include <iostream>
#include "Animal.class.hpp"

class Dog : public Animal
{

	public:

		Dog(); // canonical Default Constructor
		Dog(const Dog& src); // canonical Copy Constructor
		Dog&	operator=(const Dog& rhs); // canonical Assigment Constructor
		~Dog(); // canonical Destructor

		virtual void	makeSound() const;

};

#endif
