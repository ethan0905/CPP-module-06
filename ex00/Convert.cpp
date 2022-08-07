/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:09 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 18:32:43 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( void ) {
    
    std::cout << CYAN "Convert:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Convert::Convert( char	*arg ) {
    
    std::cout << CYAN "Convert:: " GREEN "Parametric constructor called" END << std::endl;
	this->_nb = atof(arg);
	
    return ;
}

Convert::Convert( Convert const & src ) {

    std::cout << CYAN "Convert:: " GREEN "Copy constructor called" END << std::endl;
    *this = src;
    
    return ;
}

Convert::~Convert( void ) {

    std::cout << CYAN "Convert:: " RED "Destructor called" END << std::endl;

    return ;
}

void	Convert::printChar( void )const {
	
	return ;
}

void	Convert::printInt( void )const {
	
	return ;
}

void	Convert::printFloat( void )const {
	
	return ;
}

void	Convert::printDouble( void )const {
	
	return ;
}

Convert   &Convert::operator=( Convert const &src ) {

	(void)src;
    return (*this);
}

std::ostream    &operator<<( std::ostream &o, Convert const &src) {

	(void)src;
    return (o);
}