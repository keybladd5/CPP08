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

// Desarrolle una clase Span que pueda almacenar un máximo de N enteros. N es un unsigned int
// variable y será el único parámetro pasado al constructor. Span(unsigned int);
// Esta clase tendrá una función miembro llamada addNumber() para agregar un solo número
// al lapso. Se utilizará para rellenarlo. 

// Cualquier intento de agregar un nuevo elemento si hay ya hay N elementos almacenados que deberían generar una excepción.

// A continuación, implemente dos funciones miembro: shortSpan() y longSpan()
// Descubrirán respectivamente el tramo más corto o el tramo más largo (o la distancia, si
// que prefieras) entre todos los números almacenados, y devuélvelo. Si no hay números almacenados,
// o solo uno, no se puede encontrar ningún intervalo. Por lo tanto, lanza una excepción.

// Por supuesto, escribirás tus propias pruebas y serán mucho más exhaustivas que las
// los de abajo. Pruebe su Span al menos con un mínimo de 10 000 números. Más sería
// incluso mejor.
// Por último, pero no menos importante, sería maravilloso llenar su Span utilizando una variedad de iteradores.

// Hacer miles de llamadas a addNumber() es muy molesto. Implementar una función miembro
// para agregar muchos números a tu Span en una sola llamada.

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
			int shortestSpan();// la diferencia entre valores mas pequena
			int longestSpan();//y la mas grande
			

};

#endif
