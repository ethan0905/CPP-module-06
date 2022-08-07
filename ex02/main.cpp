/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:02 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 20:46:04 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(int ac, char **av)
{
	(void)av;

	if (ac == 1)
	{
		Base	*base = NULL;
		
		base = base->generate();
		base->identify(base);
		base->identify(*base);

		delete (base);
	}
	else
		std::cerr << "Error: invalid synthax. Try with ./execName" << std::endl;

	return (0);
}