/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:15:12 by simao             #+#    #+#             */
/*   Updated: 2023/08/23 21:11:15 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	
	std::cout << BLUE << "DEBUG: " ;
	harl.complain("DEBUG");
	
	
	std::cout << GREEN << "INFO: " ;
	harl.complain("INFO");


	std::cout << MAGENTA << "WARNING: " ;
	harl.complain("WARNING");

	
	std::cout << RED << "ERROR: " ;
	harl.complain("ERROR");

	std::cout << RESET;
}