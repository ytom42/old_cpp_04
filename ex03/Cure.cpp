/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:49:01 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/17 22:57:36 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure")
{
	// std::cout << "Cure Constructor Called" << std::endl;
}

Cure::~Cure(void)
{
	// std::cout << "Cure Destructor Called" << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria("cure")
{
	// std::cout << "Cure Copy Constructor Calld" << std::endl;
	*this = copy;
}

Cure &Cure::operator=(Cure const &copy)
{
	// std::cout << "Cure Copy Operator Called" << std::endl;
	_type = copy._type;
	return (*this);
}

AMateria* Cure::clone() const
{
	// std::cout << "Cure Clone Called" << std::endl;
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
