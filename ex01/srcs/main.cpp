/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:06:46 by debian            #+#    #+#             */
/*   Updated: 2024/10/29 10:26:16 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    int     N;
    Zombie* zombieHordep;
    int     i;

    N = 7;
    zombieHordep = zombieHorde(N, "Zombie");
    i = 0;
    while (i < N)
        zombieHordep[i++].announce();
    delete [] zombieHordep;
    return (SUCCESS);
}