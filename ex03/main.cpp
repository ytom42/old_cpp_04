/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:28:26 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/17 23:02:02 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void subject_test()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void my_test()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	ICharacter* alice = new Character("alice");
	ICharacter* bob = new Character("bob");
	ICharacter* carol = new Character("carol");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	alice->equip(tmp);
	alice->equip(tmp);
	tmp = src->createMateria("cure");
	alice->equip(tmp);
	alice->equip(tmp);
	alice->equip(tmp);

	alice->use(0, *bob);
	alice->use(1, *carol);
	alice->use(2, *bob);
	alice->use(3, *carol);
	alice->use(4, *bob);

	delete alice;
	delete bob;
	delete carol;
	delete src;
}

int main()
{
	subject_test();
	// my_test();

	return (0);
}