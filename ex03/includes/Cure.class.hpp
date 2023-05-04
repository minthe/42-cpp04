/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:03:55 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/04 14:18:52 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.class.hpp"

class Cure : public AMateria
{
	public:

		Cure(); // canonical default constructor
		Cure(const Cure& src); // canonical copy constructor
		Cure& operator=(const Cure& rhs); // canonical assignment constructor
		virtual ~Cure(); // canonical destructor
		
		Cure* clone() const;
		void use(ICharacter& target);
};