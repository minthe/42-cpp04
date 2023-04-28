/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/04/28 14:37:11 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGANIMAL_CLASS_H
#define WRONGANIMAL_CLASS_H

#include <iostream>

class WrongAnimal {

	public:

		WrongAnimal(); // canonical Default Constructor
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& src); // canonical Copy Constructor
		WrongAnimal&	operator=(const WrongAnimal& rhs); // canonical Assigment Constructor
		virtual ~WrongAnimal(); // canonical Destructor

		void			makeSound() const;
		std::string		getType() const;

	protected:

		std::string	type;

};

#endif
