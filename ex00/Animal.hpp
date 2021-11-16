/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:22:17 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/16 10:47:07 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif
