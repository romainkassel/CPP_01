/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 06:24:21 by debian            #+#    #+#             */
/*   Updated: 2024/10/30 03:35:00 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#define SUCCESS 0

#include <string>
#include <iostream>

class Zombie {


public:

    void    announce( void );

    Zombie( std::string name );
    ~Zombie( void );


private:

    std::string _name;

};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif