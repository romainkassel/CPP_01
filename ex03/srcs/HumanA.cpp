/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:26:39 by debian            #+#    #+#             */
/*   Updated: 2024/10/30 10:06:43 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack( void )
{
    std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
    return ;
}

Weapon  HumanA::getWeapon( void )
{
    return (this->_Weapon);
}

std::string HumanA::getName( void ) const
{
    return (this->_name);
}

HumanA::HumanA( std::string name, Weapon& Weapon ) : _name(name), _Weapon(Weapon)
{
    return ;
}

HumanA::~HumanA( void )
{
    //std::cout << this->_name << " has been destroyed" << std::endl;
    return ;
}