/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:33:49 by simao             #+#    #+#             */
/*   Updated: 2023/07/08 00:27:32 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int const count = 10;
	Zombie *horde;

    horde = zombieHorde(count, "zombie");
	horde->annouce();
	for (int i = 0; i < count; i++)
		horde[i].annouce();
	delete [] horde;
}