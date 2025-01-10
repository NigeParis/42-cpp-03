/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/10 13:07:54 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./include/ClapTrap.hpp"
#define RED "\033[31m"

void displayAllVariables(ClapTrap &claptrap) {

    if (claptrap.getName() == "default")
        std::cout << RED;
    std::cout << "Name: " << claptrap.getName();
    std::cout << " HitPoints: " << claptrap.getHitPoints();
    std::cout << " EnergyPoints: " << claptrap.getEnergyPoints();
    std::cout << " AttackDamage: " << claptrap.getAttackDamage() << std::endl;
    std::cout << "\033[0m";
}


void thugAttack(ClapTrap &thug, ClapTrap &victim) {

    thug.attack(victim.getName());
    if ((thug.getHitPoints() > -1) && (thug.getEnergyPoints() > -1))
        victim.takeDamage(thug.getAttackDamage());
    
}

void hitRepair(ClapTrap &claptrap, unsigned int amount) {

    claptrap.beRepaired(amount);
    
}



int main( void ) {

    ClapTrap claptrap("Robinso");
    ClapTrap noname;
    
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
   
    hitRepair(claptrap, 50);


    displayAllVariables(claptrap);
    displayAllVariables(noname);
    
    return (0);
}
