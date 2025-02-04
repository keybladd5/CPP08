/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:52:32 by polmarti          #+#    #+#             */
/*   Updated: 2025/02/04 17:52:33 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>

template<typename T>
typename T::iterator easyfind(T &cont, int &to_find)
{
	for (typename T::iterator it = cont.begin(); it != cont.end(); it++)
	{
		if (*it == to_find)
			return (it);
	}
	throw std::exception();
}

#endif
