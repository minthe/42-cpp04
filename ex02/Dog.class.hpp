/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/16 19:23:10 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

#include <iostream>
#include "AAnimal.class.hpp"
#include "Brain.class.hpp"

class Dog : public AAnimal
{

	public:

		Dog(); // canonical Default Constructor
		Dog(const Dog& src); // canonical Copy Constructor
		Dog&	operator=(const Dog& rhs); // canonical Assigment Constructor
		virtual ~Dog(); // canonical Destructor

		virtual void	makeSound() const;
		void			getIdea(unsigned const int number) const;
		void			setIdea(unsigned const int number, std::string const idea);

		private:

		Brain*	_brain;

};

#endif
