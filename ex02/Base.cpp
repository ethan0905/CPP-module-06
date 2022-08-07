/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:52:13 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 20:27:24 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base( void ) {

    std::cout << CYAN "Base:: " RED "Destructor called" END << std::endl;

    return ;
}

Base    *Base::generate( void ) {

	srand(time(NULL));
	int value;
	Base	*dest = NULL;

	value = rand() % 3;

	switch( value )
	{
		case 0:
			dest = new A;
			break ;
		case 1:
			dest = new B;
			break ;
		case 2:
			dest = new C;
			break ;
		default:
			break ;
	}
	
	return (dest);
}

void    Base::identify( Base *p ) {

	A	*a = dynamic_cast<A*>(p);
	B	*b = dynamic_cast<B*>(p);
	C	*c = dynamic_cast<C*>(p);

	if (a)
		std::cout << YELLOW "Class type is [A]" END << std::endl;
	else if (b)
		std::cout << MAGENTA "Class type is [B]" END << std::endl;
	else if (c)
		std::cout << WHITE "Class type is [C]" END << std::endl;
		
	return ;
}

// void    Base::identify( Base &p ) {

// 	return ;
// }

