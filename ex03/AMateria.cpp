/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:31:14 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/17 22:50:12 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	// std::cout << "AMateria Constructor Called" << std::endl;
	_type = type;
}

AMateria::~AMateria(void)
{
	// std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (_type);
}
