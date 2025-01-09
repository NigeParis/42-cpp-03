/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:42:59 by nrobinso          #+#    #+#             */
/*   Updated: 2025/01/09 17:37:37 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ClapTrap.hpp"

// default constructor
ClapTrap::ClapTrap(void): name_("default name") {
    
    std::cout << "Default constructor called" << std::endl;    
    hitpoints_ = 10;
    energy_ = 10;
    attack_ = 0;
    
};

// name constructor
ClapTrap::ClapTrap(std::string name) {

    std::cout << "A name passed to constructor and called" << std::endl;    
    this->name_ = name;
    this->hitpoints_ = 10;
    this->energy_ = 10;
    this->attack_ = 0;
};

// copy assignement operator
ClapTrap &ClapTrap::operator=(ClapTrap& claptrap) {

    this->name_ = claptrap.getName();    
    return (*this);
};

// destructor
ClapTrap::~ClapTrap(void) {
    
    std::cout << "Destructor called" << std::endl;
};

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

    return(this->attack_);
};