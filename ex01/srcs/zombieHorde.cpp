/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:06:46 by debian            #+#    #+#             */
/*   Updated: 2024/10/29 10:32:19 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zombieHordep;
    int     i;

    zombieHordep = new Zombie[N];
    i = 0;
    while (i < N)
        zombieHordep[i++].setName(name);
    return (zombieHordep);
}