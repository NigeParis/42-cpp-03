/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/14 08:45:45 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ScavTrap.hpp"
#include "./include/FragTrap.hpp"

int displayZeroIfEmpty(int nbr) {

    if (nbr < 0)
        return (0);
    return nbr;
}

void displayAllVariables(ClapTrap &claptrap) {

    int energy = displayZeroIfEmpty(claptrap.getEnergyPoints());
    int hitpoints = displayZeroIfEmpty(claptrap.getHitPoints());

    if (claptrap.getName() == "default")
        std::cout << GREEN;
    if (claptrap.getName() != "default")
        std::cout << LIGHTBLUE;
    std::cout << "Name: " << claptrap.getName();
    std::cout << " | HitPoints: " << hitpoints;
    std::cout << " | EnergyPoints: " << energy;
    std::cout << " | AttackDamage: " << claptrap.getAttackDamage() << std::endl;
    std::cout << RESET;
}

int main( void ) {

    FragTrap fragnoname("FragNini");
    FragTrap fragname("FragName");
    FragTrap tocopyfrag("NewFrag");
    FragTrap newfrag;
    ScavTrap claptrap("nigel");
    ScavTrap noname;

    newfrag = tocopyfrag;
    
    displayAllVariables(claptrap);
    displayAllVariables(fragname);
    
    FragthugAttack(fragnoname, fragname);
    ScavthugAttack(claptrap, noname);
    thugAttack(noname, claptrap);
    claptrap.guardGate();
    fragname.highFivesGuys();
    fragnoname.highFivesGuys();
   
    hitRepair(claptrap, 1);

    displayAllVariables(claptrap);
    displayAllVariables(noname);
    displayAllVariables(fragname);
    displayAllVariables(fragnoname);
    displayAllVariables(newfrag);
    
    return (0);
}
