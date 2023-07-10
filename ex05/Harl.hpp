/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:15:06 by simao             #+#    #+#             */
/*   Updated: 2023/07/10 22:30:47 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

/* Libraries */

#include <iostream>
#include <string>

/* Colors */

# define BLUE			"\e[0;34m"
# define GREEN			"\e[0;32m"
# define MAGENTA		"\e[0;35m"
# define RED			"\e[0;31m"
# define RESET			"\e[0m"

/* Classes */

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
	    typedef void (Harl::*func)(void);
        func m_func[4];
	    std::string m_name[4];
    public:
        Harl(void);
        void complain(std::string level);
};

#endif