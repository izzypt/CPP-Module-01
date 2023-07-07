/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:33:49 by simao             #+#    #+#             */
/*   Updated: 2023/07/07 18:50:16 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie rato("rato");
    Zombie *filho;

    rato.annouce();
    filho = newZombie("ratinho filho");
    filho->annouce();
	randomChump("zombie3");
    delete filho;
    return (0);
}