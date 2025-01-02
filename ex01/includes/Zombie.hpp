/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:06:11 by debian            #+#    #+#             */
/*   Updated: 2024/10/30 03:35:20 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>
#include <iostream>

#define SUCCESS 0

class   Zombie {

public:

    void        announce( void );
    void        setName( std::string name );
    std::string getName( void );

    Zombie( void );
    ~Zombie( void );


private:

    std::string _name;
    
};

Zombie* zombieHorde( int N, std::string name );

#endif