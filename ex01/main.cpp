/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:20:27 by polmarti          #+#    #+#             */
/*   Updated: 2025/02/03 12:20:29 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		std::cout  << "Distance Test: vector with 5 elements\n";
		Span sp = Span(5);
		std::cout << "Added 6, 3, 17, 9 and 18 nbr\n";
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(18);
		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Largest: "<< sp.longestSpan() << std::endl << std::endl;
	}
	{
		std::cout  << "Distance Test: vector with 5 elements and add 11 elements\n";
		Span sp = Span(5);
		try
		{
			sp.addNumber(100);
			sp.addNumber(1, 10);
			std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
			std::cout << "Largest: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl << std::endl;
		}
	}
	{
		std::cout  << "Distance Test: vector with 10 elements and add 10 elements\n";
		Span sp = Span(10);
		try
		{
			std::cout << "Added 1 to 10 nbr\n";
			sp.addNumber(1, 10);
			std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
			std::cout << "Largest: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	return (0);
}

