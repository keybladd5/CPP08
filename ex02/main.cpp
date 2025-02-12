/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:21:32 by polmarti          #+#    #+#             */
/*   Updated: 2025/02/03 12:21:46 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	{
		std::cout << "\nOriginal subject test with MutantStack<int> template class\n";
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "String situado en el top del stack: "<< mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size total del stack: "<< mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "\nOriginal subject test with std::list<int> template class to check if the last output and this output are the same\n";
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "String situado en el top del stack: "<< mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << "Size total de la list: "<< mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	{
		std::cout << "\nMy own test to check if all works good\n";
		MutantStack<std::string> mstack;
		mstack.push("String test 0");
		mstack.push("String test 1");
		mstack.push("String test 2");
		mstack.push("String test 3");
		mstack.push("String test 4");
		mstack.push("String test 5");
		std::cout << "String situado en el top del stack: "<< mstack.top() << std::endl;
		std::cout << "Size total del stack: "<< mstack.size() << std::endl;
		std::cout << "Pop del top element de la lista\n";
		mstack.pop();
		std::cout << "Size total del stack: "<< mstack.size() << std::endl;
		for (MutantStack<std::string>::iterator it = mstack.begin(); it != mstack.end(); it++)
			std::cout  << *it << std::endl;
	}
	return 0;
}
