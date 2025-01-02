/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkassel <rkassel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:27:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/05 18:15:04 by rkassel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

#define SUCCESS 0
#define FAILURE 1

#include    <string>
#include    <iostream>

class Harl {


private:

    void    _debug( void );
    void    _info( void );
    void    _warning( void );
    void    _error( void );
    void    _default( void );

public:

    void    complain( std::string level );

    Harl( void );
    ~Harl( void );

};

#endif