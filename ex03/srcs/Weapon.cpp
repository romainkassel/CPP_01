/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:16:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/21 07:53:55 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string    &Weapon::getType( void )
{
    return (this->_type);
}

void    Weapon::setType( std::string type )
{
    this->_type = type;
    return ;
}

Weapon::Weapon( std::string type ) : _type(type)
{
    //std::cout << "Weapon " << getType() << " has been created" << std::endl;
    return ;
}

Weapon::~Weapon( void )
{
    //std::cout << "Weapon " << getType() << " has been destroyed" << std::endl;
    return ;
}