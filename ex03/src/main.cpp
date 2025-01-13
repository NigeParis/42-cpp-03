/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/13 12:52:42 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/DiamondTrap.hpp"


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

    DiamondTrap diatrap("diatrap");
    DiamondTrap newtrap;

    newtrap = diatrap;

    displayAllVariables(diatrap);
    displayAllVariables(newtrap);
    return (0);
}
