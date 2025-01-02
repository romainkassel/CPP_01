/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkassel <rkassel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:32:35 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/05 18:55:29 by rkassel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain( std::string level )
{
    void (Harl::*functionPointerArray[5])( void ) = {
        &Harl::_debug,
        &Harl::_info,
        &Harl::_warning,
        &Harl::_error,
        &Harl::_default,
    };
    std::string levelArray[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR",
    };
    int i;
    for (i = 0; i < 4; i++)
    {
        if (level == levelArray[i])
            break ;
    }
    switch ( i ) {
        case 0:
            (this->*functionPointerArray[0])();
        case 1:
            (this->*functionPointerArray[1])();
        case 2:
            (this->*functionPointerArray[2])();
        case 3:
            (this->*functionPointerArray[3])();
            break;
        default:
            (this->*functionPointerArray[4])();
    }
    return ;
}

void Harl::_debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I really do !" << std::endl << std::endl;
    return ;
}

void Harl::_info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger !" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
    return ;
}

void Harl::_warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
    return ;
}

void Harl::_error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;
    return ;
}

void Harl::_default( void )
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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