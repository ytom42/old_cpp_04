/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:43:36 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/17 22:49:54 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	_name = name;
	_number_equipped = 0;
	for (int i = 0; i < _inventory_size; i++)
		_inventory[i] = NULL;
	// std::cout << "Character " << name << " constructed" << std::endl;
}

Character::~Character(void)
{
	// std::cout << "Character " << _name << " destructed" << std::endl;
}


std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		// std::cout << "error equip. materia is None" << std::endl;
		return ;
	}
	if (_number_equipped < _inventory_size)
	{
		_inventory[_number_equipped] = m;
		_number_equipped += 1;
		// std::cout << "Character " << _name << " equipped with " << m->getType() << std::endl;
	}
	else
	{
		// std::cou.t << "Character " << _name << " is full" << std::endl;
		return ;
	}
}

void Character::unequip(int idx)
{
	if (idx < _inventory_size)
	{
		// std::cout << "Character " << _name << " unequipped " << _inventory[idx]->getType() << std::endl;
		return ;
	}
	else
	{
		// std::cout << "Character " << _name << "'s inventory is empty" << std::endl;
		return ;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (0 <= idx  && idx < _number_equipped)
	{
		// std::cout << "Character " << _name << " uses " << _inventory[idx]->getType() << std::endl;
		_inventory[idx]->use(target);
		unequip(idx);
	}
	else
	{
		// std::cout << "Character " << _name << "'s inventory(" << idx << ") is none" << std::endl;
		return ;
	}
}
