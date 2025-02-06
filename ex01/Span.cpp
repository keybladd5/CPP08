/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:56:00 by polmarti          #+#    #+#             */
/*   Updated: 2025/02/06 18:56:02 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size) : _size(size){}

Span::Span(Span const &src)
{
	*this = src;
}

Span const &Span::operator=(Span const &src)
{
	if (this != &src)
	{
		_arr = src._arr;
		_size = src._size;
	}
	return (*this);
}

Span::~Span(){}

void Span::addNumber(int nbr)
{
	if (_arr.size() >= _size)
		throw std::runtime_error("container is full, can't hold more elements");
	_arr.push_back(nbr);
}

int Span::shortSpan()
{
	if (_arr.size() <= 2)
		throw std::runtime_error("container only have 1 element");

}

int Span::longSpan()
{
	if (_arr.size() <= 2)
		throw std::runtime_error("container only have 1 element");
}
