/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/13 18:39:59 by nrobinso         ###   ########.fr       */
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

    displayAllVariables(diatrap);
    displayAllVariables(newtrap);



    diaThugAttack(diatrap, newtrap, newtrap.getDiaName());
    diaThugAttack(diatrap, newtrap, newtrap.getDiaName());
    diaThugAttack(diatrap, newtrap, newtrap.getDiaName());

   
    
    displayAllVariables(diatrap);
    displayAllVariables(newtrap);
    diaThugAttack(newtrap, diatrap, diatrap.getDiaName());
    diaThugAttack(diatrap, newtrap, newtrap.getDiaName());
    diaThugAttack(diatrap, newtrap, newtrap.getDiaName());
    displayAllVariables(diatrap);
    displayAllVariables(newtrap);
    diaThugAttack(newtrap, diatrap, diatrap.getDiaName());

    newtrap.beRepaired(100);
    displayAllVariables(diatrap);
    displayAllVariables(newtrap);
    diatrap.whoAmI();

    newtrap = diatrap;
    diaThugAttack(diatrap, newtrap, newtrap.getDiaName());
    displayAllVariables(diatrap);
    displayAllVariables(newtrap);
    
    return (0);
}
