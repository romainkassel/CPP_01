/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkassel <rkassel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:32:35 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/05 17:51:43 by rkassel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain( std::string level )
{
    void (Harl::*functionPointerArray[4])( void ) = {
        &Harl::_debug,
        &Harl::_info,
        &Harl::_warning,
        &Harl::_error
    };
    std::string levelArray[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    int i;
    for (i = 0; i < 4; i++)
    {
        if (level == levelArray[i])
            (this->*functionPointerArray[i])();
    }
    
    return ;
}

void Harl::_debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
    return ;
}

void Harl::_info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
    return ;
}

void Harl::_warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    return ;
}

void Harl::_error( void )
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
    return ;
}

Harl::Harl( void )
{
    return ;
}

Harl::~Harl( void )
{
    return ;
}