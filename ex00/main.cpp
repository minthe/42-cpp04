/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:53:29 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/03/16 10:52:07 by vfuhlenb         ###   ########.fr       */
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
	std::cout << "\nTest1\n" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		const WrongAnimal* k = new WrongAnimal();
		const WrongAnimal* l = new WrongCat();
		const WrongCat* m = new WrongCat();

		std::cout
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
		j->makeSound(); //dog sound
		meta->makeSound(); //animal sound
		k->makeSound(); //Wrong Animal sound
		l->makeSound(); // should output wrong cat sound but will not be able to reach that overloaded function
		m->makeSound(); // here it will output WrongCat sound

		delete meta;
		delete j;
		delete i;
		delete k;
		delete l;
		delete m;
	}
	std::cout << "\nTest1 complete\n" << std::endl;
	std::cout << "\nTest2\n" << std::endl;
	{
		Animal A;
		Dog	Foo;
		Cat Boo;
		WrongAnimal W;
		WrongCat C;

		std::cout
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
	std::cout << "\nTest2 complete\n" << std::endl;
	return 0;
}
