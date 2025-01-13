/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:06:02 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/13 18:15:24 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/DiamondTrap.hpp"

//default comstructor
DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name") {

    std::cout << "DiamondTrap default constructor is called" << std::endl;
    this->name_ = "default";
    this->hitpoints_ = 100;
    this->energy_ = 50;
    this->damage_ = 30;
};

// named constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {

    std::cout << "DiamondTrap named constructor is called" << std::endl;
    this->name_ = name;
    this->hitpoints_ = 100;
    this->energy_ = 50;
    this->damage_ = 30;    
};


// copy constructor 
DiamondTrap::DiamondTrap(DiamondTrap &diamondtrap) {

    std::cout << "DiamondTrap copy constructor is called" << std::endl;
    this->name_ = diamondtrap.name_;
    this->hitpoints_ = diamondtrap.hitpoints_;
    this->energy_ = diamondtrap.energy_;
    this->damage_ = diamondtrap.damage_;

};

// copy operator assignement
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
    
    std::cout << "DiamondTrap copy assignement operator is called" << std::endl;
    if (this != &diamondtrap) {
        this->name_ = diamondtrap.name_;
        this->hitpoints_ = diamondtrap.hitpoints_;
        this->energy_ = diamondtrap.energy_;
        this->damage_ = diamondtrap.damage_;
    }
    return (*this);    
};


// destructor
DiamondTrap::~DiamondTrap(void) {

    std::cout << "DiamondTrap " << this->name_ << " Destructor is called" << std::endl;
};




void DiamondTrap::whoAmI(void) {

   std::cout << "DiamondTrap name: " << name_ << " whoAmI()" <<std::endl;
   std::cout << "ClapTrap    name: " << ClapTrap::name_ << " whoAmI()" << std::endl;
    
};

void DiamondTrap::attack(const std::string& target) {

        if (this->energy_ < LIMIT) {
            
            std::cout << GREY;
            std::cout << "ScavTrap " << this->name_ << " has no energy to attack" << std::endl;
            this->energy_ = -1;
        }
        else if (this->hitpoints_ < LIMIT) {
            
            std::cout << GREY;
            std::cout << "ScavTrap " << this->name_ << " has no hit points to attack" << std::endl;
            this->hitpoints_ = -1;
        }
        else
        {
            ScavTrap::attack(target);    

        }
};


std::string DiamondTrap::getDiaName(void) {

    return (this->name_);
    
};

// call functions for main
void diaThugAttack(DiamondTrap &thug, DiamondTrap &victim, std::string victimname) {

    thug.attack(victimname);
    if ((thug.getHitPoints() > -1) && (thug.getEnergyPoints() > -1))
        victim.takeDamage(thug.getAttackDamage());
};
