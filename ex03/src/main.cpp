/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/13 16:38:43 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/DiamondTrap.hpp"


int displayZeroIfEmpty(int nbr) {

    if (nbr < 0)
        return (0);
    return nbr;
}


void displayAllVariables(DiamondTrap &claptrap) {

    int energy = displayZeroIfEmpty(claptrap.getEnergyPoints());
    int hitpoints = claptrap.getHitPoints();
    // int hitpoints = displayZeroIfEmpty(claptrap.getHitPoints());

    if (claptrap.getDiaName() == "default")
        std::cout << GREEN;
    if (claptrap.getDiaName() != "default")
        std::cout << LIGHTBLUE;
    std::cout << "Name: " << claptrap.getDiaName();
    std::cout << " | HitPoints: " << hitpoints;
    std::cout << " | EnergyPoints: " << energy;
    std::cout << " | AttackDamage: " << claptrap.getAttackDamage() << std::endl;
    std::cout << RESET;
}




int main( void ) {

    DiamondTrap diatrap("diaName");
    DiamondTrap newtrap;
    // DiamondTrap equalstrap("test");

    // displayAllVariables(equalstrap);
    displayAllVariables(diatrap);
    displayAllVariables(newtrap);



    diaThugAttack(diatrap, newtrap, "newtrap");
    diaThugAttack(diatrap, newtrap, "newtrap");
    diaThugAttack(diatrap, newtrap, "newtrap");

   
    
    displayAllVariables(diatrap);
    displayAllVariables(newtrap);

    newtrap.beRepaired(100);
    displayAllVariables(diatrap);
    displayAllVariables(newtrap);
    diatrap.whoAmI();
    return (0);
}
