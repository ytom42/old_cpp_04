/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:30:43 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/17 21:17:53 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Constructor Called" << std::endl;
	_type = "Dog";
	brain = new Brain();
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete brain;
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog Copy Assignment Called" << std::endl;
	_type = copy._type;
	*(this->brain) = *(copy.getBrain());
	return (*this);
}

Animal &Dog::operator=(const Animal &copy)
{
	std::cout << "Dog Copy Assignment Called" << std::endl;
	_type = copy.getType();
	*(this->brain) = *(copy.getBrain());
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return (brain);
}
