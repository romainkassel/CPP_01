/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:57:23 by debian            #+#    #+#             */
/*   Updated: 2024/11/21 07:53:58 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>
#include <iostream>

class Weapon {


public:

    const std::string   &getType( void );
    void                setType( std::string type );

    Weapon( std::string type );
    ~Weapon( void );


private:

    std::string _type;

};

#endif