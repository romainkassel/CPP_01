/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkassel <rkassel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:26:24 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/05 17:54:55 by rkassel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
    Harl    instance;
    
    instance.complain("DEBUG");
    instance.complain("INFO");
    instance.complain("WARNING");
    instance.complain("ERROR");
    
    return (SUCCESS);
}