/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:18:11 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/17 21:27:51 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *animals[10];
	Brain *brain;

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		brain = animals[i]->getBrain();
		brain->ideas[0] = "hoge";
		brain->ideas[1] = "fuga";
		brain->ideas[2] = "piyo";
		brain->ideas[3] = "poyo";
	}
	
	std::cout << animals[2]->getType() << std::endl;
	std::cout << animals[2]->getBrain()->ideas[0] << std::endl;
	std::cout << animals[2]->getBrain()->ideas[1] << std::endl;
	std::cout << animals[2]->getBrain()->ideas[2] << std::endl;
	std::cout << animals[2]->getBrain()->ideas[3] << std::endl;

	brain = animals[1]->getBrain();
	brain->ideas[3] = "42";
	*(animals[2]) = *(animals[1]);
	
	std::cout << animals[2]->getType() << std::endl;
	std::cout << animals[2]->getBrain()->ideas[0] << std::endl;
	std::cout << animals[2]->getBrain()->ideas[1] << std::endl;
	std::cout << animals[2]->getBrain()->ideas[2] << std::endl;
	std::cout << animals[2]->getBrain()->ideas[3] << std::endl;

	for (int i = 0; i < 10; i++)
		delete animals[i];

	return (0);
}