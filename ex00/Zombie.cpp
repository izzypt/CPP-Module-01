/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:33:40 by simao             #+#    #+#             */
/*   Updated: 2023/08/23 21:23:23 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "Destructor on zombie: " << this->name << std::endl;
}

void Zombie::annouce(void)
{ 
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}