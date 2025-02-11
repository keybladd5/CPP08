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

/* std::stack<T>             La pila
    └── container_type       Tipo del contenedor interno (std::deque<T> por defecto)
          └── iterator       Tipo de iterador asociado al contenedor interno
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
			iterator begin();
			iterator end();
			typedef typename std::stack<T>::container_type::const_iterator const_iterator;
			const_iterator begin() const ;
			const_iterator end() const ; 
};

# include "MutantStack.tpp"
#endif
