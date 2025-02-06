/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:08:24 by polmarti          #+#    #+#             */
/*   Updated: 2025/02/04 18:08:28 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

#define MAX_NBR 10

int main(void)
{		
		std::cout << "Test with vector container, set MAX_NBR position with the same value." << std::endl;
		std::vector<int> data;
		for (int i = 0; i < MAX_NBR; i++)
			data.push_back(i);
		std::vector<int>::iterator it = data.begin();
		int x = -42;
		std::cout << "First call to easyfind template func: ";
		try
		{
			std::cout << *::easyfind(data, x) << std::endl;
			std::cout << "The easyfind func template found the int!" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Data not found\n"<< std::endl;
		}
		std::cout << "Call to insert() method in vector class to insert the wanted value.\n\n";
		data.insert(it, x);
		std::cout << "Second call to easyfind template func: ";
		try
		{
			std::cout << *::easyfind(data, x) << std::endl;
			std::cout << "The easyfind func template found the int!" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Data not found"<< std::endl;
		}

}
