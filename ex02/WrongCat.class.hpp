/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 18:20:32 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGCAT_CLASS_H
# define WRONGCAT_CLASS_H

#include <iostream>
#include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat(); // canonical Default Constructor
		WrongCat(const WrongCat& src); // canonical Copy Constructor
		WrongCat&	operator=(const WrongCat& rhs); // canonical Assigment Constructor
		~WrongCat(); // canonical Destructor

		void		makeSound() const;

};

#endif
