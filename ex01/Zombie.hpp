/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:33:37 by simao             #+#    #+#             */
/*   Updated: 2023/07/08 00:21:56 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

/* Libraries */
#include <iostream>
#include <string>

/* Classes */
class Zombie 
{
    private:
        std::string name;    
    public:
		Zombie();
		~Zombie(void);
        void setName(std::string name);
        void annouce(void);
};

/* Functions */
Zombie *newZombie(std::string name);
void randomChump(std::string name);
Zombie *zombieHorde(int n, std::string name);

#endif