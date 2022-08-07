/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:02 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 19:09:46 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

struct Data
{
	char c;
	int	n;
	float f;
	double d;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		Data	*data;
		uintptr_t	raw;
		
		serialize(data);
		deserialize(raw);
	}
	else
		std::cerr << "Error: invalid synthax. Try with ./execName <value>" << std::endl;
	return (0);
}