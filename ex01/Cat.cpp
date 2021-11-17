/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:30:41 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/17 21:17:50 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Constructor Called" << std::endl;
	_type = "Cat";
	brain = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete brain;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat Copy Assignment Called" << std::endl;
	_type = copy._type;
	*(this->brain) = *(copy.getBrain());
	return (*this);
}

Animal &Cat::operator=(const Animal &copy)
{
	std::cout << "Cat Copy Assignment Called" << std::endl;
	_type = copy.getType();
	*(this->brain) = *(copy.getBrain());
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (brain);
}
