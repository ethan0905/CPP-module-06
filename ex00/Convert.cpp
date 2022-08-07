/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:09 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 18:53:16 by c2h6             ###   ########.fr       */
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
	
	if (!(this->_nb >= CHAR_MIN && this->_nb <= CHAR_MAX))
		std::cerr << "char: impossible" << std::endl;
	else if (!(this->_nb >= CHAR_MIN_PRINTABLE && this->_nb <= CHAR_MAX_PRINTABLE))
		std::cerr << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(this->_nb) << "'" << std::endl;

	return ;
}

void	Convert::printInt( void )const {

	if (!(this->_nb >= INT_MIN && this->_nb <= INT_MAX))
		std::cerr << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(this->_nb) << std::endl;	

	return ;
}

void	Convert::printFloat( void )const {
	
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->_nb) << "f" << std::endl;
	
	return ;
}

void	Convert::printDouble( void )const {
	
	return ;
}

Convert   &Convert::operator=( Convert const &src ) {

    // std::cout << CYAN "Convert:: " GREEN "Operator = called" END << std::endl;
	this->_nb = src._nb;
	
    return (*this);
}

std::ostream    &operator<<( std::ostream &o, Convert const &src) {

    // std::cout << CYAN "Convert:: " GREEN "Operator << called" END << std::endl;
	(void)src;
    return (o);
}