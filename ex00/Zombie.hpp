/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:33:37 by simao             #+#    #+#             */
/*   Updated: 2023/07/07 18:51:44 by simao            ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie(void);
        void annouce(void);
};

/* Functions */
Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif