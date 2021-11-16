/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:02:28 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/16 11:04:27 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain
{
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		std::string ideas[100];
};

#endif
