/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:00:02 by simao             #+#    #+#             */
/*   Updated: 2023/07/10 16:09:58 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exheader.hpp"

int	checkError(int argcount)
{
	if (argcount != 4)
	{
		std::cout << RED;
		std::cout << "Error: Please provide '<filename> <string1> <string2>'";
		std::cout << RESET << std::endl;
		return (1);
	}
	return (0);
}

std::string	formatFileName(char *filename)
{
	std::string		fileName;

	fileName = filename;
	fileName = fileName.insert(fileName.find(".txt"), ".replace");

	return (fileName);
}

int	main(int argc, char **argv)
{
	std::string		str1 = argv[2];
	std::string		str2 = argv[3];
	int				str_pos;
	std::fstream	file;
	std::fstream	new_file;

	if (checkError(argc))
		return (1);
	file.open(argv[1], std::ios::in);
	new_file.open(formatFileName(argv[1]), std::ios::out);
	if (file.is_open())
	{
		std::string line;
		while (std::getline(file, line))
		{
			str_pos = line.find(str1);
			while (str_pos >= 0)
			{
				std::cout << "Found a match at: " << str_pos << std::endl;
				line.insert(str_pos, str2);
				line.erase((str_pos + str2.length()), str1.length());
				str_pos = line.find(str1);
			}
			new_file << line << std::endl;
		}
		file.close();
		new_file.close();
	}
	return (0);
}
