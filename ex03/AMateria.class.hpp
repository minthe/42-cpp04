/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:24:31 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/04/28 16:04:56 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.class.hpp"

class AMateria
{
	public:

		AMateria(); //canonical default constructor
		AMateria(const AMateria& src); //canonical copy constructor
		AMateria&	operator=(const AMateria& rhs); //canonical assignment constructor
		virtual ~AMateria(); //canonical destructor
		AMateria(std::string const & type);
		
		std::string const & getType() const; //returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		
};
