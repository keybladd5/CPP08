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
/*There is a class that complies with the requirements of the subject.
Its member functions use STL algorithms to find their result as much as
possible. Finding the shortest span can't be done only by subtracting
the two lowest numbers (take a closer look at the subject example).

Improved addNumber function
There's a way to add numbers that's more practical than calling the
addNumber() function repeatedly.

Exercise 02: Mutated abomination
As usual, there has to be enough tests to prove the program works as expected. If there isn't, 
do not grade this exercise. If any non-interface class is not in orthodox canonical class form, do not grade this exercise.

MutantStack class
There is a MutantStack class that offers all of std::stack methods.
It must contain an iterator.
Also, it is possible to do at least the operations shown in the subject's examples using iterators.

Better tests
There is a at least a main() function that has more tests than the ones
from the subject.*/

