/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:06:58 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/10 14:28:21 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ClapTrap.hpp"

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
    hitRepair(noname, -50);

    thugAttack(noname, claptrap);
    
    thugAttack(claptrap, noname);

    displayAllVariables(claptrap);
    displayAllVariables(noname);
    
    return (0);
}
