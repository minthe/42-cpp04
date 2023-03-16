/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/16 11:06:59 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H

#include <iostream>

class Animal
{

	public:

		Animal(); // canonical Default Constructor
		Animal(std::string type); // String Constructor
		Animal(const Animal& src); // canonical Copy Constructor
		Animal&	operator=(const Animal& rhs); // canonical Assigment Constructor
		virtual ~Animal(); // canonical Destructor

		std::string					getType() const;
		virtual void				makeSound() const;

	protected:

		std::string		_type;

};

#endif
