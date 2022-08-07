/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:52:13 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 19:58:59 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base( void ) {

    std::cout << CYAN "Base:: " RED "Destructor called" END << std::endl;

    return ;
}

Base    *Base::generate( void ) {

	return ;
}

void    Base::identify( Base *p ) {

	return ;
}

void    Base::identify( Base &p ) {

	return ;
}

