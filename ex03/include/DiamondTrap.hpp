/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:06:35 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/13 18:33:47 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap {

    public :

        DiamondTrap(void);
        DiamondTrap(std::string name);    
        DiamondTrap(DiamondTrap &diamondtrap);    
        DiamondTrap &operator=(const DiamondTrap &diamondtrap);    
        ~DiamondTrap(void);
        void attack(const std::string& target);
        std::string getDiaName(void);

        void whoAmI(void);
    
    private :

        std::string name_;
    
};

void diaThugAttack(DiamondTrap &thug, DiamondTrap &victim, std::string victimname);

#endif