/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:42:59 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/10 13:02:37 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ClapTrap.hpp"
#define COST 1

// default constructor
ClapTrap::ClapTrap(void): name_("default") {
    
    std::cout << "Default constructor is called" << std::endl;    
    this->hitpoints_ = 10;
    this->energy_ = 10;
    this->damage_ = 0;
    
};

// name constructor
ClapTrap::ClapTrap(std::string name) {

    std::cout << "A name is passed to the constructor is then called" << std::endl;    
    this->name_ = name;
    this->hitpoints_ = 10;
    this->energy_ = 10;
    this->damage_ = 0;
};

// copy assignement operator
ClapTrap &ClapTrap::operator=(ClapTrap& claptrap) {

    this->name_ = claptrap.getName();    
    return (*this);
};

// destructor
ClapTrap::~ClapTrap(void) {
    
    std::cout << "A Destructor is called" << std::endl;
};


// get private variables
std::string ClapTrap::getName(void) const {

    return(this->name_);    
};

int ClapTrap::getHitPoints(void) const {
    
    return(this->hitpoints_);
};

int ClapTrap::getEnergyPoints(void) const {

    return(this->energy_);
};

int ClapTrap::getAttackDamage(void) const {

    return(this->damage_);
};

//set private variables
void ClapTrap::useEnergyPoints(unsigned int amount) {

    this->energy_ = this->energy_ - amount;
};





void ClapTrap::takeDamage(unsigned int amount) {

    std::cout << ", causing " << amount << " points of damage!" << std::endl;
    this->hitpoints_ = this->hitpoints_ - amount;
};

// actions
void ClapTrap::attack(const std::string& target) {

    if (this->energy_ > 0 && this->hitpoints_ > 0) {
        std::cout << "ClapTrap " << this->name_ << " attacks " << target;
        this->useEnergyPoints(COST);
    }  
    else
    {
        if (this->energy_ < 1) {
            std::cout << "ClapTrap " << this->name_ << " has no energy to attack" << std::endl;
            this->energy_ = -1;
        }
        if (this->hitpoints_ < 1) {
            std::cout << "ClapTrap " << this->name_ << " has no hit points to attack" << std::endl;
            this->hitpoints_ = -1;
        }
    }   
};


void ClapTrap::beRepaired(unsigned int amount) {

    if (amount > 2147483647) {
        std::cout << "ClapTrap beRepaired amount is negative" << std::endl;
        return;
    }
    if (this->energy_ > 0) {
        std::cout << "ClapTrap " << this->name_ << " repairs of it's self of " << amount << " points" << std::endl;
        this->hitpoints_ = this->hitpoints_ + amount;
        this->energy_--; 
    }  
    else
    {
        if (this->energy_ < 1) {
            std::cout << "ClapTrap " << this->name_ << " has no energy be repaired" << std::endl;
            this->energy_ = -1;
        }
    }   


    
};

