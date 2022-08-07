/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:09 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 18:16:10 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( void ) {
    
    std::cout << CYAN "Convert:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Convert::Convert( Convert & src ) {

    std::cout << CYAN "Convert:: " GREEN "Copy constructor called" END << std::endl;
    *this = src;
    
    return ;
}

Convert::~Convert( void ) {

    std::cout << CYAN "Convert:: " RED "Destructor called" END << std::endl;

    return ;
}

Convert   &Convert::operator=( Convert const &rhs ) {

	(void)rhs;
    return (*this);
}

std::ostream    &operator<<( std::ostream &o, Convert const &rhs) {

	(void)rhs;
    return (o);
}