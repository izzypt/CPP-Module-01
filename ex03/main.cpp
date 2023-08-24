/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <smagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 22:40:11 by simao             #+#    #+#             */
/*   Updated: 2023/08/23 21:17:30 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    Weapon knife = Weapon("Pointy knife");
    HumanB jim("Jim");
    jim.setWeapon(knife);
    jim.attack();
    knife.setType("some other type of knife");
    jim.attack();
}
