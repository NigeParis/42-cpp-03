/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:56:01 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/13 11:24:46 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

    public :
        
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &scavtrap);
        ScavTrap &operator=(ScavTrap &scavtrap);
        ~ScavTrap(void);   
        void attack(const std::string& target);
        void guardGate(void);

    private :
        
    
};

void ScavthugAttack(ScavTrap &thug, ScavTrap &victim);


#endif
