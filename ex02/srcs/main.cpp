/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:36:13 by debian            #+#    #+#             */
/*   Updated: 2024/10/29 10:47:38 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SUCCESS 0

#include <string>
#include <iostream>

int	main( void )
{
	std::string		brain;
	std::string*	stringPTR;
	std::string&	stringREF = brain;
	
	brain = "HI THIS IS BRAIN";
	stringPTR = &brain;

	std::cout << &brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << brain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	
	return (SUCCESS);
}