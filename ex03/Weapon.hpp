/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:37:05 by simao             #+#    #+#             */
/*   Updated: 2023/07/09 14:50:39 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPoN_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
    private:
		std::string type;
    public:
		const std::string &getType();
		void        setType(std::string type);
};

#endif