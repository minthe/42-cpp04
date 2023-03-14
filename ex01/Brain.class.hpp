/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:27 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/14 13:37:03 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H

#include <iostream>

class Brain {

	public:

		Brain(); // canonical Default Constructor
		Brain(const Brain& src); // canonical Copy Constructor
		Brain&	operator=(const Brain& rhs); // canonical Assigment Constructor
		virtual ~Brain(); // canonical Destructor

	protected:

		std::string		_ideas[100];

};

#endif
