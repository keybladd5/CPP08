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

int main(void)
{
	std::vector<int> data;
	for (int i = 0; i < 10; i++)
		data.push_back(i);
	int x = 5;
	try
	{
		std::cout << *::easyfind(data, x) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Data not found"<< std::endl;
	}
}
