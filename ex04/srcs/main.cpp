/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:12:31 by debian            #+#    #+#             */
/*   Updated: 2024/11/21 08:48:10 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main( int argc, char **argv )
{
	std::string		outfile_name;
	
	if (check_args(argc, argv) == FAILURE)
		return (FAILURE);
	outfile_name = get_outfile_name(argv);
	if (!outfile_name.c_str())
		return (FAILURE);
	std::ofstream	ofs(outfile_name.c_str());
	do_the_trick(ofs, argv);
	ofs.close();
	return (SUCCESS);
}