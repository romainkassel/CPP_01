/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:21:18 by debian            #+#    #+#             */
/*   Updated: 2024/10/30 10:05:43 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {


public:

    void        attack( void );
    std::string getName( void ) const;
    Weapon      getWeapon( void );

    HumanA( std::string name, Weapon& Weapon );
    ~HumanA( void );
    

private:

    std::string _name;
    Weapon&     _Weapon;
    
};

#endif