/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:22:17 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/16 12:12:21 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &copy);
		virtual Animal &operator=(const Animal &copy);
		std::string getType(void) const;
		virtual void makeSound(void) const;
		virtual Brain *getBrain(void) const = 0;
};

#endif
