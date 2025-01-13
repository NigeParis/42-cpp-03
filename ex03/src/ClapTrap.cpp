/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:42:59 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/13 10:45:23 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ClapTrap.hpp"

// default constructor
ClapTrap::ClapTrap(void): name_("default") {
    
    std::cout << GREY;
    std::cout << "ClapTrap Default constructor is called" << std::endl;    
    std::cout << RESET;
    this->hitpoints_ = 10;
    this->energy_ = 10;
    this->damage_ = 0;
    
};

// name constructor
ClapTrap::ClapTrap(std::string name) {

    std::cout << PINK;
    std::cout << "ClapTrap named constructor is called" << std::endl;    
    std::cout << RESET;
    this->name_ = name;
    this->hitpoints_ = 10;
    this->energy_ = 10;
    this->damage_ = 0;
};

// copy constructor
ClapTrap::ClapTrap(ClapTrap &claptrap) {

    std::cout << "ClapTrap copy constructor is called" << std::endl;
        this->name_ = claptrap.getName();
        this->energy_ = claptrap.getEnergyPoints();
        this->hitpoints_ = claptrap.getHitPoints();
        this->damage_ = claptrap.getAttackDamage();
};


// copy assignement operator
ClapTrap &ClapTrap::operator=(ClapTrap& claptrap) {

    if (this != &claptrap) {
        std::cout << "ClapTrap copy assignement operator is called" << std::endl;
        this->name_ = claptrap.getName();
        this->energy_ = claptrap.getEnergyPoints();
        this->hitpoints_ = claptrap.getHitPoints();
        this->damage_ = claptrap.getAttackDamage();
    }
    return (*this);
};

// destructor
ClapTrap::~ClapTrap(void) {
    
    std::cout << BLUE;
    std::cout << "ClapTrap " << this->name_ << " Destructor is called" << std::endl;
    std::cout << RESET;
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




void ClapTrap::takeDamage(unsigned int amount) {
    
    if (this->name_ != "default")
        std::cout << RED;
    std::cout << ", causing " << amount << " points of damage!" << std::endl;
    this->hitpoints_ = this->hitpoints_ - amount;
    std::cout << RESET;

};

// actions
void ClapTrap::attack(const std::string& target) {
 
    if (this->name_ == "default")
        std::cout << RED;

    if (this->energy_ >= LIMIT && this->hitpoints_ >= LIMIT) {
        std::cout << "ClapTrap " << this->name_ << " attacks " << target;
        this->energy_ = this->energy_ - LIMIT;
    }  
    else
    {
        if (this->energy_ < LIMIT) {
            
            std::cout << GREY;
            std::cout << "ClapTrap " << this->name_ << " has no energy to attack" << std::endl;
            this->energy_ = -1;
        }
        if (this->hitpoints_ < LIMIT) {
            
            std::cout << GREY;
            std::cout << "ClapTrap " << this->name_ << " has no hit points to attack" << std::endl;
            this->hitpoints_ = -1;
        }
    }  
    std::cout << RESET; 
};


void ClapTrap::beRepaired(unsigned int amount) {
  
    std::cout << YELLOW;
    if (amount > MAXAMOUNT) {
        
        std::cout << GREY;
        std::cout << "ClapTrap Error " << this->name_ <<" beRepaired amount is negative" << std::endl;
        std::cout << RESET; 
        return;
    }
    if (this->energy_ >= LIMIT) {
   
        std::cout << "ClapTrap " << this->name_ << " repairs of it's self of " << amount << " points" << std::endl;
        this->hitpoints_ = this->hitpoints_ + amount;
        this->energy_--; 
    }  
    else
    {
        if (this->energy_ < LIMIT) {
            
            std::cout << GREY;
            std::cout << "ClapTrap " << this->name_ << " has no energy be repaired" << std::endl;
            this->energy_ = -1;
        }
    }   
    std::cout << RESET;  
};


void thugAttack(ClapTrap &thug, ClapTrap &victim) {

    thug.attack(victim.getName());
    if ((thug.getHitPoints() > -1) && (thug.getEnergyPoints() > -1))
        victim.takeDamage(thug.getAttackDamage());
    
}

void hitRepair(ClapTrap &claptrap, unsigned int amount) {

    claptrap.beRepaired(amount); 
}

