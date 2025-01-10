/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:55:23 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/10 17:51:57 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ScavTrap.hpp"

//default constructor
ScavTrap::ScavTrap(void) {

    std::cout << "ScavTrap default constructor is called" << std::endl;
    this->hitpoints_ = 100;
    this->energy_ = 50;
    this->damage_ = 20;
};

//named constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    
    std::cout << "ScavTrap named constructor is called" << std::endl;
    this->hitpoints_ = 100;
    this->energy_ = 50;
    this->damage_ = 20;  
};


//copy operator assignement 
ScavTrap &ScavTrap::operator=(ScavTrap& scavtrap) {

    (void)scavtrap;
    return (*this);
};



//destructor
ScavTrap::~ScavTrap(void) {

    std::cout << "ScavTrap " << this->name_ << " Destructor is called" << std::endl;
};

void ScavTrap::guardGate(void) {
    
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
};


void ScavTrap::attack(const std::string& target) {
 
    if (this->name_ == "default")
        std::cout << RED;

    if (this->energy_ >= LIMIT && this->hitpoints_ >= LIMIT) {
        std::cout << "ScavTrap " << this->name_ << " attacks " << target;
        this->energy_ = this->energy_ - LIMIT;
    }  
    else
    {
        if (this->energy_ < LIMIT) {
            
            std::cout << GREY;
            std::cout << "ScavTrap " << this->name_ << " has no energy to attack" << std::endl;
            this->energy_ = -1;
        }
        if (this->hitpoints_ < LIMIT) {
            
            std::cout << GREY;
            std::cout << "ScavTrap " << this->name_ << " has no hit points to attack" << std::endl;
            this->hitpoints_ = -1;
        }
    }  
    std::cout << RESET; 
};



void ScavthugAttack(ScavTrap &thug, ScavTrap &victim) {

    thug.attack(victim.getName());
    if ((thug.getHitPoints() > -1) && (thug.getEnergyPoints() > -1))
        victim.takeDamage(thug.getAttackDamage());
    
}