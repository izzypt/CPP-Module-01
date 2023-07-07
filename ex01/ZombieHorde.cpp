/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:18:28 by simao             #+#    #+#             */
/*   Updated: 2023/07/08 00:24:33 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
    int i;
    Zombie *horde;

    
    i = 0;
    horde = new Zombie[n];
    while (i < n)
    {
        horde[i].setName(name + " " + std::to_string(i));
        i++;
    }
    return horde;
}