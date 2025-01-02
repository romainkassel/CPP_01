/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:06:46 by debian            #+#    #+#             */
/*   Updated: 2024/10/29 10:28:58 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

void    Zombie::setName( std::string name )
{
    this->_name = name;
    return ;
}

std::string Zombie::getName( void )
{
    return (this->_name);
}

Zombie::Zombie( void )
{
    return ;
}

Zombie::~Zombie( void )
{
    std::cout << this->_name << " has been destroyed with success." << std::endl;
    return ;
}
