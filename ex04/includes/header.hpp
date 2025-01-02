/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:39:07 by debian            #+#    #+#             */
/*   Updated: 2024/11/21 10:31:55 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_HPP__
#define __HEADER_HPP__

#define SUCCESS 0
#define FAILURE 1

#include <fstream>
#include <iostream>
#include <string>

int         check_args( int argc, char **argv );
int		    do_the_trick( std::ofstream &ofs, char **argv );
std::string	get_outfile_name( char **argv );

#endif