/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:16:41 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/16 10:17:16 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	_type = "WrongCat";
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = copy;
}

WrongCat &WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "WrongCat Copy Assignment Called" << std::endl;
	_type = copy._type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Meow" << std::endl;
}
