/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:44:31 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/04/28 14:47:27 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICHARACTER_CLASS_H
#define ICHARACTER_CLASS_H

#include <iostream>
#include "AMateria.class.hpp"

class ICharacter {

	public:

		virtual ~ICharacter() {}

		virtual std::string const & getName() const = 0; // pure virtual function
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};

#endif
