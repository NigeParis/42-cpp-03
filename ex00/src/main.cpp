/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/09 17:45:15 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./include/ClapTrap.hpp"


int main( void ) {

    ClapTrap claptrap("nini");
    ClapTrap noname;
    
    std::cout << std::endl;
    
    std::cout << "Name         : " << claptrap.getName() << std::endl;
    std::cout << "HitPoints    : " << claptrap.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << claptrap.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << claptrap.getAttackDamage() << std::endl;
    std::cout << std::endl;
    std::cout << "Name         : " << noname.getName() << std::endl;
    std::cout << "HitPoints    : " << noname.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << noname.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << noname.getAttackDamage() << std::endl;


    
        
    std::cout << std::endl;
    return (0);
}
