/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 12:29:22 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/12 15:32:34 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap {

    public: 
            FragTrap(void);
            FragTrap(std::string name);
            FragTrap(const FragTrap &fragtrap);
            FragTrap &operator=(FragTrap& fragtrap);
            ~FragTrap(void);
            void attack(const std::string& target);
            void highFivesGuys(void);

    private:
    
};
 
void FragthugAttack(FragTrap &thug, FragTrap &victim);

#endif