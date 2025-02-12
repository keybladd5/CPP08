/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:42:31 by polmarti          #+#    #+#             */
/*   Updated: 2025/02/11 10:42:35 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "MutantStack constructor called\n";
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src)
{
	*this = src;
}

template<typename T>
MutantStack<T> const &MutantStack<T>::operator=(MutantStack<T> const &src)
{
	if (this != &src)
		this->c = src.c;
	return (*this);
}

// In this case and in the following ones, where you find the keyword typename,  
// it is used to specify to the compiler that the concept "MutantStack<T>::iterator"  
// is a data type.  
// Without this keyword, the compiler does not know whether "iterator" in the  
// MutantStack<T> template is a variable or a data type.  
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}
// Although 'iterator' is already defined via 'typedef' in the .hpp file,
// the compiler still requires the 'typename' keyword here. This is because,
// during template instantiation, it needs explicit confirmation that
// 'MutantStack<T>::iterator' is a type.
template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const 
{
	return (this->c.end());
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack destructor called\n";
}
