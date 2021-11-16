/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:30:06 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/16 12:16:13 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(std::string name);
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);
		Animal &operator=(const Animal &copy);
		void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif