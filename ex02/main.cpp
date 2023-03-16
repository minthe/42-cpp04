/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/16 10:46:41 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.class.hpp"
#include "WrongAnimal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "WrongCat.class.hpp"
#include "Brain.class.hpp"

#define ANIMALS 10

int	main() {

	const AAnimal    *something = new AAnimal();

	// std::cout << "\n----TEST 1---- CONSTRUCTION -----\n" << std::endl;
	// {
	// 	const AAnimal*	animal[ANIMALS];

	// 	for (int i = 0; i < ANIMALS; i++)
	// 	{
	// 		if (i % 2 == 0)
	// 			animal[i] = new Cat();
	// 		else
	// 			animal[i] = new Dog();
	// 	}

	// 	std::cout << "\n----TEST 1---- ANNOUNCE -----\n" << std::endl;

	// 	for (int i = 0; i < ANIMALS; i++)
	// 	{
	// 		std::cout << animal[i]->getType() << std::endl;
	// 		animal[i]->makeSound();
	// 	}

	// 	std::cout << "\n----TEST 1---- DECONSTRUCT -----\n" << std::endl;

	// 	for (int i = 0; i < ANIMALS; i++)
	// 		delete animal[i];
	// }
	// std::cout << "\n----TEST 1---- COMPLETED -----\n" << std::endl;

	// std::cout << "\n\n----TEST 2---- CONSTRUCTION -----\n" << std::endl;
	// {
	// 	Cat*	cat = new Cat;
	// 	Dog*	dog = new Dog;
	// 	Cat*	cat3 = new Cat;

	// 	std::cout << "\n----TEST 2---- IDEAS -----\n" << std::endl;

	// 	cat->setIdea(0, "First Idea");
	// 	dog->setIdea(0, "First Idea");
	// 	cat->getIdea(0);
	// 	dog->getIdea(0);
	// 	Cat *cat2 = new Cat(*cat);
	// 	cat2->getIdea(0);
	// 	cat->setIdea(0, "First Idea #2");
	// 	cat->getIdea(0);
	// 	cat2->getIdea(0);
	// 	cat2->getIdea(1);
	// 	dog->getIdea(0);
	// 	dog->makeSound();
	// 	cat2->makeSound();

	// 	std::cout << "\nTesting copy constructor -> brain deep copy\n" << std::endl;
	// 	cat3->getIdea(0);
	// 	cat2->getIdea(0);
	// 	*cat2 = *cat3;
	// 	cat2->getIdea(0);
	// 	*cat3 = *cat;
	// 	*cat2 = *cat3;
	// 	cat3->getIdea(0);
	// 	cat2->getIdea(0);
	// 	cat2->getIdea(-12);
	// 	cat2->getIdea(142);
		
	// 	std::cout << "\n----TEST 2---- DECONSTRUCT -----\n" << std::endl;

	// 	delete cat;
	// 	delete cat2;
	// 	delete dog;
	// }
	// std::cout << "\n----TEST 2---- COMPLETED -----\n" << std::endl;

	return (0);
}
