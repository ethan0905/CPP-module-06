/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:16:06 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 18:31:30 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include "color.h"

class Convert {
    
    public:
        Convert( void );
        Convert( char *arg );
        Convert( Convert const & src );
        ~Convert( void );

		void	printChar( void )const;
		void	printInt( void )const;
		void	printFloat( void )const;
		void	printDouble( void )const;

        Convert  &operator=( Convert const &src );
        
    private:
		double	_nb;
};

std::ostream    &operator<<( std::ostream &o, Convert const &src);

#endif