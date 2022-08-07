/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:02 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 19:32:18 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
		
		std::cout << "data ptr:" << std::endl; 
		std::cout << "ptr.c: '" << ptr.c << "'" << std::endl; 
		std::cout << "ptr.n: " << ptr.n << "" << std::endl; 

		raw = serialize(&ptr);
		ptr_casted = deserialize(raw);

		std::cout << "data ptr_casted:" << std::endl; 
		std::cout << "ptr_casted->c: '" << ptr_casted->c << "'" << std::endl; 
		std::cout << "ptr_casted->n: " << ptr_casted->n << "" << std::endl; 
	}
	else
		std::cerr << "Error: invalid synthax. Try with ./execName <value>" << std::endl;
	return (0);
}