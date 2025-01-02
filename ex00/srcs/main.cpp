/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:24:24 by debian            #+#    #+#             */
/*   Updated: 2024/10/29 07:56:51 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie* newZombiep;

    newZombiep = newZombie("Zombie1");
    newZombiep->announce();
    delete  newZombiep;
    randomChump("Zombie2");
    return (SUCCESS);
}