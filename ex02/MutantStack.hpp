/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:42:21 by polmarti          #+#    #+#             */
/*   Updated: 2025/02/11 10:42:25 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* std::stack<T>
    └── (class member) container_type (to access this container, named 'c', which is a 'deque' by default and is protected in the base class)
          └── (class member) iterator
*/

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{

	public:
			MutantStack();
			MutantStack(MutantStack const &);
			MutantStack const &operator=(MutantStack const &);
			~MutantStack();
			typedef typename std::stack<T>::container_type::iterator iterator;
			typedef typename std::stack<T>::container_type::const_iterator const_iterator;
			iterator begin();
			iterator end();
			const_iterator begin() const ;
			const_iterator end() const ; 
};

# include "MutantStack.tpp"
#endif
