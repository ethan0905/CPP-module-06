/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:02 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 19:17:44 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	char c;
	int	n;
	float f;
	double d;
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
		Data	*data = NULL;
		uintptr_t	raw = 0;
		
		serialize(data);
		deserialize(raw);
	}
	else
		std::cerr << "Error: invalid synthax. Try with ./execName <value>" << std::endl;
	return (0);
}