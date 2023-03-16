/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/16 10:37:19 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H

#include <iostream>

class AAnimal
{

	public:

		AAnimal(); // canonical Default Constructor
		AAnimal(std::string type); // String Constructor
		AAnimal(const AAnimal& src); // canonical Copy Constructor
		AAnimal&	operator=(const AAnimal& rhs); // canonical Assigment Constructor
		virtual ~AAnimal(); // canonical Destructor

		std::string					getType() const;
		virtual void				makeSound() const = 0;

	protected:

		std::string		_type;

};

#endif
