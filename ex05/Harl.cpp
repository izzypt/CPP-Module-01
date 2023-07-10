/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:15:09 by simao             #+#    #+#             */
/*   Updated: 2023/07/10 22:31:42 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	m_func[0] = &Harl::debug;
    m_func[1] = &Harl::info;
    m_func[2] = &Harl::warning;
    m_func[3] = &Harl::error;

	m_name[0] = "DEBUG";
    m_name[1] = "INFO";
    m_name[2] = "WARNING";
    m_name[3] = "ERROR";
}

void Harl::complain( std::string level )
{
	for (int i = 0; i < 4; i++)
	{
		if (!m_name[i].compare(level))
		{
			(this->*m_func[i])();
			break;
		}
	}
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;	
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;		
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;		
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;		
}
