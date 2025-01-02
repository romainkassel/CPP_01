/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkassel <rkassel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:26:24 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/05 18:11:22 by rkassel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char **argv )
{
    Harl    instance;

    if (argc != 2)
    {
        std::cerr << "This program eats one argument." << std::endl;
        return (FAILURE);
    }
    instance.complain(argv[1]);
    
    return (SUCCESS);
}