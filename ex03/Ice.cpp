/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:48:54 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/17 21:01:46 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	// std::cout << "Ice Constructor called" << std::endl;
}

Ice::~Ice(void)
{
	// std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria("ice")
{
	// std::cout << "Ice Copy Constructor called" << std::endl;
	*this = copy;
}

Ice &Ice::operator=(Ice const &copy)
{
	// std::cout << "Ice Assignment operator called" << std::endl;
	_type = copy._type;
	return *this;
}

AMateria* Ice::clone() const
{
	// std::cout << "Ice Clone called" << std::endl;
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
