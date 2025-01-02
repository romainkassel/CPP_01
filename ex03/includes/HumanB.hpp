/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:21:18 by debian            #+#    #+#             */
/*   Updated: 2024/10/30 10:05:49 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {


public:

    void        attack( void );
    std::string getName( void ) const;
    Weapon      getWeapon( void );
    void        setWeapon( Weapon& test );

    HumanB( std::string name );
    ~HumanB( void );
    

private:

    std::string _name;
    Weapon*     _Weapon;
    
};

#endif