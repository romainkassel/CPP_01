/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:26:39 by debian            #+#    #+#             */
/*   Updated: 2025/01/02 09:55:15 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack( void )
{
    if (this->_Weapon == NULL)
    {
        std::cerr << "No weapon equiped, " << this->_name << " can't attack!" << std::endl;
        return ;
    }
    
    std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
    
    return ;
}

Weapon  HumanB::getWeapon( void )
{
    return (*this->_Weapon);
}

void    HumanB::setWeapon( Weapon& test )
{
    this->_Weapon = &test;
    return ;
}

std::string HumanB::getName( void ) const
{
    return (this->_name);
}

HumanB::HumanB( std::string name ) : _name(name), _Weapon(NULL)
{
    //std::cout << this->_name << " has been created" << std::endl;
    return ;
}

HumanB::~HumanB( void )
{
    //std::cout << this->_name << " has been destroyed" << std::endl;
    return ;
}