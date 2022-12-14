/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:02 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/09 16:24:49 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "color.hpp"

struct Data
{
	char c;
	int	n;
};

uintptr_t serialize(Data* ptr) 
{
	uintptr_t raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data* deserialize(uintptr_t raw)
{
	Data *ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int	main(int ac, char **av)
{
	(void)av;
	if (ac == 1)
	{
		Data	ptr;
		Data	*ptr_casted;
		uintptr_t	raw = 0;

		ptr.c = 'A';
		ptr.n = 42;
		
		std::cout << CYAN "======= Before Serialisation ========" END << std::endl; 
				
		std::cout << YELLOW "data ptr:" << std::endl; 
		std::cout << "adress: " << &ptr << std::endl; 
		std::cout << "ptr.c: '" << ptr.c << "'" << std::endl; 
		std::cout << "ptr.n: " << ptr.n << "" END << std::endl; 

		raw = serialize(&ptr);
		ptr_casted = deserialize(raw);

		std::cout << CYAN "======== After Serialisation ========" END << std::endl; 

		std::cout << MAGENTA "data ptr_casted:" << std::endl; 
		std::cout << "adress: " << ptr_casted << std::endl; 
		std::cout << "ptr_casted->c: '" << ptr_casted->c << "'" << std::endl; 
		std::cout << "ptr_casted->n: " << ptr_casted->n << "" END << std::endl;

		ptr_casted->c = 'z';
		ptr_casted->n = 21;

		std::cout << CYAN "======== After Use of Struct ========" END << std::endl; 

		std::cout << WHITE "data ptr_casted:" << std::endl; 
		std::cout << "adress: " << ptr_casted << std::endl; 
		std::cout << "ptr_casted->c: '" << ptr_casted->c << "'" << std::endl; 
		std::cout << "ptr_casted->n: " << ptr_casted->n << "" END << std::endl;
	}
	else
		std::cerr << "Error: invalid synthax. Try with ./execName" << std::endl;
	return (0);
}