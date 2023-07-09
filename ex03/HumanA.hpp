/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:30:08 by simao             #+#    #+#             */
/*   Updated: 2023/07/09 16:12:00 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon  *weapon;
    public:
                HumanA(std::string name, Weapon *weapon);
                ~HumanA();
        void    attack();
};

#endif