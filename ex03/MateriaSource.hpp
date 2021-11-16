/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:14:14 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/16 20:41:23 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		const static int _materias_size = 4;
		AMateria *_materias[MateriaSource::_materias_size];
		int _number_learned;
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		~MateriaSource(void);
		MateriaSource &operator=(const MateriaSource &copy);
		void learnMateria(AMateria* copy);
		AMateria* createMateria(std::string const & type);
};

#endif
