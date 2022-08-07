/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:06 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 18:16:07 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define END "\033[0m"

#define CYAN "\033[1;36m"
#define YELLOW "\033[1;33m"
#define MAGENTA "\033[1;35m"
#define WHITE "\033[1;37m"

#define GREY "\033[1;90m"

class Convert {
    
    public:
        Convert( void );
        Convert( Convert & rhs );
        ~Convert( void );

		// std::string	intToString( int n );

        Convert  &operator=( Convert const &rhs );
        
    private:
};

std::ostream    &operator<<( std::ostream &o, Convert const &rhs);

#endif