/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/13 18:08:34 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ClapTrap.hpp"

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

    ClapTrap noname;
    ClapTrap copynoname;
    ClapTrap claptrap("Robinso");
    
    displayAllVariables(claptrap);
    displayAllVariables(noname);
    
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(noname, claptrap);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);   
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);

    copynoname = noname;
    hitRepair(claptrap, 50);
    hitRepair(noname, -50);

    thugAttack(noname, claptrap);
    
    thugAttack(claptrap, noname);
    thugAttack(claptrap, noname);
    hitRepair(claptrap, 50);
    

    displayAllVariables(claptrap);
    displayAllVariables(noname);
    hitRepair(noname, 1);
    displayAllVariables(noname);
    displayAllVariables(copynoname);
    
    return (0);
}
