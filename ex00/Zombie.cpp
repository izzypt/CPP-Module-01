/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:33:40 by simao             #+#    #+#             */
/*   Updated: 2023/07/07 17:22:23 by simao            ###   ########.fr       */
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