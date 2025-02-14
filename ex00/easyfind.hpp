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
# include <vector>
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T &cont, int &to_find)
{
	typename T::iterator itB = cont.begin();
	typename T::iterator itE = cont.end();
	typename T::iterator it = std::find(itB, itE, to_find);
	if (it == itE)
		throw std::exception();
	else
		return (it);
}

#endif
