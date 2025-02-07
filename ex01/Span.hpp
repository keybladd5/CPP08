/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:56:14 by polmarti          #+#    #+#             */
/*   Updated: 2025/02/06 18:56:15 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <limits.h>

class Span
{
	private:
			Span();
			std::vector<int> _arr;
			unsigned int _size;
	public:
			Span(unsigned int size);
			Span(Span const &);
			Span const &operator=(Span const &);
			~Span();
			void addNumber(int);
			void addNumber(int, unsigned int);
			int shortestSpan();
			int longestSpan();
			

};

#endif
