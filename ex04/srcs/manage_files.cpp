/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_files.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 08:15:29 by debian            #+#    #+#             */
/*   Updated: 2024/11/21 08:51:12 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

std::string	get_outfile_name( char **argv )
{
	std::string	infile_name;
	std::string	outfile_name;
	int			len;

	infile_name = argv[1];
	len = infile_name.find('.');
	if (len == -1)
		len = infile_name.size();
	outfile_name.assign(infile_name, 0, len);
	outfile_name.append(".replace");
	return (outfile_name);
}

int do_the_trick(std::ofstream &ofs, char **argv)
{
	std::ifstream	ifs(argv[1]);
    std::string 	current_line;
    std::string 	s1;
    std::string 	s2;
	std::string		substr;
	int				pos;

    s1 = argv[2];
    s2 = argv[3];
    while (getline(ifs, current_line))
    {
		pos = 0;
		while (current_line.empty() == SUCCESS)
		{
			pos = current_line.find(s1);
			if (pos == -1)
			{
				ofs << current_line;
				current_line = "";
			}
			else
			{
				substr = current_line.substr(0, pos);
				ofs << substr;
				ofs << s2;
				current_line = current_line.substr(pos + s1.size());
			}
		}
		ofs << std::endl;
	}
	ifs.close();
    return (SUCCESS);
}
