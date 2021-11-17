/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:40:48 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/17 22:35:04 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		static const int _inventory_size = 4;
		AMateria *_inventory[Character::_inventory_size];
		int _number_equipped;
	public:
		Character(std::string const &name);
		~Character(void);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif