/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:18:28 by simao             #+#    #+#             */
/*   Updated: 2023/08/22 19:35:44 by smagalha         ###   ########.fr       */
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
        horde[i].setName(name + " ");
        i++;
    }
    return horde;
}