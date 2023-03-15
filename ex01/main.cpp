/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/14 21:40:52 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"
#include "WrongAnimal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "WrongCat.class.hpp"
#include "Brain.class.hpp"

int main()
{
	const Animal* j = new Dog();
	Animal* i = new Cat();

	i->setIdea(0, "first idea");
	std::cout << i->getIdea(0) << std::endl;

	Animal* caat = new Cat();

	caat = i;
	
	i->setIdea(0, "first idea mod");
	
	std::cout << caat->getIdea(0) << std::endl;
	
	delete j; //should not create a leak
	delete i;
	delete caat;

	return 0;
}
