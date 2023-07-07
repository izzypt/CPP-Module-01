/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:33:49 by simao             #+#    #+#             */
/*   Updated: 2023/07/08 00:14:38 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *besta;

    besta = zombieHorde(10, "TiagozZzZzZ");
    std::cout << "besta name is" << besta->name;
    return (0);
}