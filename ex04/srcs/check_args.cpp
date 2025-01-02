/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:36:22 by debian            #+#    #+#             */
/*   Updated: 2024/11/21 09:18:21 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	check_infile( char *argv1 )
{
	std::ifstream	ifs(argv1);
	std::string		ifs_content;

	if (ifs.fail() == FAILURE)
	{
		std::cerr << "File opening failed." << std::endl;
		ifs.close();
		return (FAILURE);
	}
	getline(ifs, ifs_content);
	if (ifs_content.empty() == FAILURE)
	{
		std::cerr << "Input file should not be empty or a folder." << std::endl;
		ifs.close();
		return (FAILURE);
	}
	ifs.close();
	return (SUCCESS);
}

int	check_replace_ext( std::string infile )
{
	int			dot_ext_index;
	int			ext_size;
	std::string	ext_cpy;

	dot_ext_index = infile.find('.');
	if (dot_ext_index == -1)
		return (SUCCESS);
	ext_size = infile.size() - dot_ext_index;
	ext_cpy.assign(infile, dot_ext_index, ext_size);
	if (ext_cpy.compare(".replace") == 0)
	{
		std::cerr << "Extension of input file should not be equal to '.replace'" << std::endl;
		return (FAILURE);
	}
	return (SUCCESS);
}

int	check_mult_ext_infile( std::string infile )
{
	int	first_occ;
	int	last_occ;

	first_occ = infile.find_first_of('.');
	last_occ = infile.find_last_of('.');

	if (first_occ != last_occ)
	{
		std::cerr << "Input filename should have only one extension or no extension at all." << std::endl;
		return (FAILURE);
	}
	return (SUCCESS);
}

int	check_argc( int argc )
{
	if (argc != 4)
	{
		std::cerr << "Invalid argument number." << std::endl;
		return (FAILURE);
	}
	return (SUCCESS);
}

int	check_empty_arg( std::string infile, std::string s1 )
{
	if (infile.empty() == FAILURE || s1.empty() == FAILURE)
	{
		std::cerr << "filename and s1 parameters should not be empty (as strings)." << std::endl;
		return (FAILURE);
	}
	return (SUCCESS);
}

int	check_args( int argc, char **argv )
{
	std::string		infile;
	std::string		s1;
	std::string		s2;

	if (argv[1])
		infile = argv[1];
	if (argv[2])
		s1 = argv[2];
	if (argv[3])
		s2 = argv[3];

	if (check_argc(argc) == FAILURE
		|| check_empty_arg(infile, s1) == FAILURE
		|| check_mult_ext_infile(infile) == FAILURE
		|| check_replace_ext(infile) == FAILURE
		|| check_infile(argv[1]) == FAILURE)
	{
		return (FAILURE);
	}
	return (SUCCESS);
}