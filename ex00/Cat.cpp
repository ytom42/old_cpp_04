/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:30:41 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/16 10:49:49 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor Called" << std::endl;
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
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}
