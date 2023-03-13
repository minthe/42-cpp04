/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/13 18:10:40 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"
#include "WrongAnimal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "WrongCat.class.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		const WrongAnimal* k = new WrongAnimal();
		const WrongAnimal* l = new WrongCat();

		std::cout
			<< "\nTest1\n\n"
			<< j->getType() << " "
		<< std::endl;
		std::cout
			<< i->getType() << " "
		<< std::endl;
		std::cout
			<< k->getType() << " "
		<< std::endl;
		std::cout
			<< l->getType() << " "
		<< std::endl;

		i->makeSound(); //will output the cat sound! j->makeSound();
		meta->makeSound();
		k->makeSound();
		l->makeSound();

		delete meta;
		delete j;
		delete i;
		delete k;
		delete l;
	}
	{
		Animal A;
		Dog	Foo;
		Cat Boo;
		WrongAnimal W;
		WrongCat C;

		std::cout
			<< "\nTest2\n\n"
			<< A.getType()
			<< Foo.getType() << "\n"
			<< Boo.getType() << "\n"
			<< W.getType() << "\n"
			<< C.getType() << "\n"
		<< std::endl;

		A.makeSound();
		Foo.makeSound();
		Boo.makeSound();
		W.makeSound();
		C.makeSound();
	}

	return 0;
}