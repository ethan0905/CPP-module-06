/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c2h6 <c2h6@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:52:17 by c2h6              #+#    #+#             */
/*   Updated: 2022/08/07 20:16:53 by c2h6             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include "color.hpp"

class Base {
    
    public:
        virtual ~Base( void );
        
        Base    *generate( void );
        void    identify( Base *p );
        // void    identify( Base &p );

    private:
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif