/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:02 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 18:23:14 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	convert_param(char *arg)
{
	Convert	param(arg);

	param.printChar();
	param.printInt();
	param.printFloat();
	param.printDouble();
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		convert_param(av[1]);
	}
	else
		std::cerr << "Error: invalid synthax. Try with ./execName <value>" << std::endl;
	return (0);
}