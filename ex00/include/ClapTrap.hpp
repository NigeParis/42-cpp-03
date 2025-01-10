/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:41:44 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/10 14:26:25 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

#define LIMIT 1
#define MAXAMOUNT 2147483647
#define RED "\033[31m"
#define BLUE "\033[34m"
#define GREEN "\033[32m"
#define GREY "\033[30m"
#define YELLOW "\033[33m"
#define LIGHTBLUE "\033[36m"
#define PINK "\033[35m"
#define RESET "\033[0m"

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
        
    
};

void hitRepair(ClapTrap &claptrap, unsigned int amount);
void thugAttack(ClapTrap &thug, ClapTrap &victim);
void displayAllVariables(ClapTrap &claptrap);
int displayZeroIfEmpty(int nbr);

#endif
