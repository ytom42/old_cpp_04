/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:14:21 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/17 22:39:29 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	// std::cout << "MateriaSource constructor called" << std::endl;
	_number_learned = 0;
	for (int i = 0; i < _materias_size; i++)
		this->_materias[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	// std::cout << "MateriaSource destructor called" << std::endl;
	for(int i = 0; i < _number_learned; i++)
		delete this->_materias[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	// std::cout << "MateriaSource Assignment operator called" << std::endl;
	for (int i = 0; i < _materias_size; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		if (copy._materias[i])
			this->_materias[i] = copy._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	return *this;
}


void MateriaSource::learnMateria(AMateria* copy)
{
	if (_number_learned < _materias_size)
	{
		_materias[_number_learned] = copy;
		_number_learned += 1;
		// std::cout << "Learned " << copy->getType() << " Materia" << std::endl;
	}
	else
	{
		// std::cout << "MateriaSource is full" << std::endl;
		return ;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _materias_size; i++)
	{
		if (type == this->_materias[i]->getType())
			return this->_materias[i]->clone();
	}
	std::cout << "No materia of type " << type << " found" << std::endl;
	return (NULL);
}
