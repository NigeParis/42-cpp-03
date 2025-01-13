/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 12:28:51 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/13 18:26:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/FragTrap.hpp"

//default comstructor
FragTrap::FragTrap(void) : ClapTrap() {
    
    std::cout << "FragTrap default constructor is called" << std::endl;
    this->hitpoints_ = 101;
    this->energy_ = 100;
    this->damage_ = 30;
};

//named constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name) {

    std::cout << "FragTrap named constructor is called" << std::endl;
    this->hitpoints_ = 101;
    this->energy_ = 100;
    this->damage_ = 30;
};

// copy constructor 
FragTrap:: FragTrap(const FragTrap &fragtrap) {

    std::cout << "FragTrap copy constructor is called" << std::endl;
    this->name_ = fragtrap.name_;
    this->energy_ = fragtrap.energy_;
    this->hitpoints_ = fragtrap.hitpoints_;
    this->damage_ = fragtrap.damage_; 
};

// copy operator assignement
FragTrap &FragTrap::operator=(const FragTrap &fragtrap) {

    std::cout << "FragTrap copy assignement operator is called" << std::endl;
    if (this != &fragtrap) {

        this->name_ = fragtrap.name_;
        this->energy_ = fragtrap.energy_;
        this->hitpoints_ = fragtrap.hitpoints_;
        this->damage_ = fragtrap.damage_;     
    }
    return (*this);
};

// destructor
FragTrap::~FragTrap(void) { 

    std::cout << "FragTrap " << this->name_ << " Destructor is called" << std::endl;
};



void FragTrap::highFivesGuys(void) {

    std::cout << "FragTrap " << this->name_ << " Give me five guys ?" << std::endl;
    
};

void FragTrap::attack(const std::string& target) {
 
    if (this->name_ == "default")
        std::cout << RED;

    if (this->energy_ >= LIMIT && this->hitpoints_ >= LIMIT) {
        std::cout << "FragTrap " << this->name_ << " attacks " << target;
        this->energy_ = this->energy_ - LIMIT;
    }  
    else
    {
        if (this->energy_ < LIMIT) {
            
            std::cout << GREY;
            std::cout << "FragTrap " << this->name_ << " has no energy to attack" << std::endl;
            this->energy_ = -1;
        }
        if (this->hitpoints_ < LIMIT) {
            
            std::cout << GREY;
            std::cout << "FragTrap " << this->name_ << " has no hit points to attack" << std::endl;
            this->hitpoints_ = -1;
        }
    }  
    std::cout << RESET; 
};


// call functions for main
void FragthugAttack(FragTrap &thug, FragTrap &victim) {

    thug.attack(victim.getName());
    if ((thug.getHitPoints() > -1) && (thug.getEnergyPoints() > -1))
        victim.takeDamage(thug.getAttackDamage());
    
}
