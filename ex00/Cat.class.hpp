/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 18:14:36 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

#include <iostream>
#include "Animal.class.hpp"

class Cat : public Animal
{

	public:

		Cat(); // canonical Default Constructor
		Cat(const Cat& src); // canonical Copy Constructor
		Cat&	operator=(const Cat& rhs); // canonical Assigment Constructor
		~Cat(); // canonical Destructor

		virtual void	makeSound() const;

};

#endif
