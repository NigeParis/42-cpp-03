/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:06:02 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/13 13:03:54 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/DiamondTrap.hpp"

//default comstructor
DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name") {

    std::cout << "DiamondTrap default constructor is called" << std::endl;
    this->hitpoints_ = 100;
    this->energy_ = 50;
    this->damage_ = 30;
};

// named constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {

    std::cout << "DiamondTrap named constructor is called" << std::endl;
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

