/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:56:01 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/10 16:36:15 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public :
        
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap &operator=(ScavTrap &scavtrap);
        ~ScavTrap(void);
        

    private :
        
        int setHitPoints(unsigned int amount);
    
};





#endif
