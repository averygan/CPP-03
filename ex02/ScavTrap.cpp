/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:15:39 by agan              #+#    #+#             */
/*   Updated: 2024/05/14 17:15:39 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap Default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap Name param constructor called!" << std::endl;
}

/* Copy constructor copies all members of copy to new object */
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "ScavTrap Copy constructor called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called!" << std::endl;
}

/* Copy Assignment operator */
ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	std::cout << "ScavTrap Copy Assignment Operator called!" << std::endl;
	return *this;	
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_points >= 1 && this->hit_points > 0)
	{
		this->energy_points--;
		std::cout << BROWN << "ScavTrap " << this->name << " attacks " << target
		<< ", causing " << this->attack_damage << " points of damage ⚔️" << RESET << std::endl; 
	}
	else if (energy_points == 0)
		std::cout << BROWN << "ScavTrap " << this->name << " is unable to attack " << target
		<< ", as they have insufficient energy points" << RESET << std::endl;
	else if (hit_points <= 0)
		std::cout << BROWN << "ScavTrap " << this->name << " is unable to attack " << target
		<< ", as they are dead 💀" << RESET << std::endl; 
	this->printStats();
}

void ScavTrap::guardGate()
{
	if (this->hit_points > 0)
		std::cout << BROWN << this->name << " is now in gate keeper mode ⛩️" << std::endl;
	else
		std::cout << RED << this->name << " is unable to guard gate as they are dead 💀" << std::endl;
	std::cout << RESET;
}