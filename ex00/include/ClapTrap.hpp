/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:41:44 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/10 12:40:02 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap {

    public :
        
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap &operator=(ClapTrap &claptrap);
        ~ClapTrap(void);

        std::string getName(void) const;
        int getHitPoints(void) const;
        int getEnergyPoints(void) const;
        int getAttackDamage(void) const;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
    private :

        std::string name_;
        int hitpoints_;
        int energy_;
        int damage_;
        void useEnergyPoints(unsigned int amount);
        
    
};

// std::ostream &operator<<(std::ostream &output, ClapTrap &claptrap);

#endif
