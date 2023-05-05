/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:03:58 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/05 17:33:27 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.class.hpp"

class Ice : public AMateria
{
	public:

		Ice(); // canonical default constructor
		Ice(const Ice& src); // canonical copy constructor
		Ice& operator=(const Ice& rhs); // canonical assignment constructor
		virtual ~Ice(); // canonical destructor
		
		Ice* clone() const;
};
