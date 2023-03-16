/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/16 19:23:13 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

#include <iostream>
#include "AAnimal.class.hpp"
#include "Brain.class.hpp"

class Cat : public AAnimal
{

	public:

		Cat(); // canonical Default Constructor
		Cat(const Cat& src); // canonical Copy Constructor
		Cat&	operator=(const Cat& rhs); // canonical Assigment Constructor
		virtual ~Cat(); // canonical Destructor

		virtual void	makeSound() const;
		void			getIdea(unsigned const int number) const;
		void			setIdea(unsigned const int number, std::string const idea);

	private:

		Brain*	_brain;

};

#endif
