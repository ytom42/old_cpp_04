/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:30:43 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/16 10:49:46 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor Called" << std::endl;
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
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}
