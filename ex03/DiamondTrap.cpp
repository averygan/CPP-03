/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:25:56 by agan              #+#    #+#             */
/*   Updated: 2024/05/14 20:25:59 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default constructor called!" << std::endl;
}

/* Expected results:
hit points 100
energy points 50
attack damage 30 */
DiamondTrap::DiamondTrap(std::string new_name) :
	ClapTrap(new_name + "_clap_name"), 
	ScavTrap(new_name),
	FragTrap(new_name), 
	name(new_name)
{
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap Name param constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap Copy constructor called!" << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called!" << std::endl;
}

// Overloaded operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	std::cout << "DiamondTrap Copy Assignment Operator called!" << std::endl;
	return *this;	
}

void DiamondTrap::whoAmI()
{
	std::cout << BROWN << \
	"My name is " << RESET << this->name << std::endl << BROWN << \
	"My ClapTrap name is " << RESET << ClapTrap::name << RESET << std::endl;
}

