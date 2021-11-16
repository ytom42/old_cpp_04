/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:02:34 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/16 11:24:45 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(Brain const &copy)
{
	std::cout << "Brain Copy Assignment Called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}
