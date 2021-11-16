/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:29:27 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/16 12:15:43 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog(void);
		~Dog(void);
		Dog(std::string name);
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		Animal &operator=(const Animal &copy);
		void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif