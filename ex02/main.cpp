/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:15:59 by simao             #+#    #+#             */
/*   Updated: 2023/08/23 21:33:08 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string("HI THIS IS BRAIN");
	std::string *stringPTR;
	std::string &stringREF = string;
    
    string = "HI THIS IS BRAIN";    
    stringPTR = &string;
	std::cout << "Address of string: " << &string << std::endl;
	std::cout << "Address of string using stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of string using stringREF: " << &stringREF << std::endl;
	std::cout << "String value          : '" << string << "'" << std::endl;
	std::cout << "String using stringPTR: '" << *stringPTR << "'" << std::endl;
	std::cout << "String using stringREF: '" << stringREF << "'" << std::endl;
}
