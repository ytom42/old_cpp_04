/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:22:07 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/16 10:47:08 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(void)
{
	_type = "Animal";
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << "Animal Assignment Operator Called" << std::endl;
	_type = copy._type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (_type);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal makeSound Called" << std::endl;
}
