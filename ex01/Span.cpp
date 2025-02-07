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
	if (_arr.size() > _size)
		throw std::runtime_error("container is full, can't hold more elements");
	_arr.push_back(nbr);
}

void Span::addNumber(int nbr, unsigned int sizeIt)
{
	if (_arr.size() + sizeIt > _size)
		throw std::runtime_error("container is full, can't hold more elements");
	for (unsigned int x = 0; x < sizeIt; x++)
		_arr.push_back(nbr + x);
}

int Span::shortestSpan()
{
	if (_arr.size() < 2)
		throw std::runtime_error("container has less than 2 elements");
	std::vector<int>::iterator itB = _arr.begin();
	std::vector<int>::iterator itE = _arr.end();
	std::sort(itB, itE);
	int min = INT_MAX;
	for (std::vector<int>::iterator it = _arr.begin(); it != itE; it++)
	{
		if ((*(it + 1) - *it) < min && (*(it + 1) - *it) >= 0)
			min = (*(it + 1) - *it);
	}
	return (min);

}

int Span::longestSpan()
{
	if (_arr.size() < 2)
		throw std::runtime_error("container has less than 2 elements");
	std::vector<int>::iterator itB = _arr.begin();
	std::vector<int>::iterator itE = _arr.end();
	int min = *std::min_element(itB, itE);
	int max = *std::max_element(itB, itE);
	return (max - min);
}
