/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:55:23 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/10 16:57:37 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ScavTrap.hpp"

//default constructor
ScavTrap::ScavTrap(void) {
    std::cout << "ScavTrap default constructor is called" << std::endl;
    this->hitpoints_ = 100;
  
    
};

//named constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap named constructor is called" << std::endl;
    
    this->hitpoints_ = 100;

    // this->energy_ = 50;
    // this->damage_ = 20;
  
    
};


//copy operator assignement 
ScavTrap &ScavTrap::operator=(ScavTrap& scavtrap) {

    (void)scavtrap;
    return (*this);
};



//destructor
ScavTrap::~ScavTrap(void) {

    std::cout << "ScavTrap Destructor is called" << std::endl;
};



int ScavTrap::setHitPoints(unsigned int amount) {
    
    (void)amount;

    return (0);
};
