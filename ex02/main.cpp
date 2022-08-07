/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:02 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 20:11:06 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac == 1)
	{
		Base	*base = NULL;
		
		base->generate();
		
		delete (base);
	}
	else
		std::cerr << "Error: invalid synthax. Try with ./execName <value>" << std::endl;
	return (0);
}