/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:39:50 by agan              #+#    #+#             */
/*   Updated: 2024/05/08 19:39:51 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("nameless"), hit_points(10), energy_points(10), attack_damage(0) 
{
	std::cout << "ClapTrap Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap Name param constructor called!" << std::endl;
}

/* Copy constructor copies all members of copy to new object */
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "ClapTrap Copy constructor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called!" << std::endl;
}

/* Copy Assignment operator */
ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	std::cout << "ClapTrap Copy Assignment Operator called!" << std::endl;
	return *this;	
}

/* attack causes target to lose <attack damage> hit points 
requires 1 energy point */
void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points >= 1 && this->hit_points > 0)
	{
		this->energy_points--;
		std::cout << BROWN << this->name << " attacks " << target
		<< ", causing " << this->attack_damage << " points of damage ⚔️" << RESET << std::endl; 
	}
	else if (energy_points == 0)
		std::cout << BROWN << this->name << " is unable to attack " << target
		<< ", as they have insufficient energy points" << RESET << std::endl;
	else if (hit_points <= 0)
		std::cout << BROWN << this->name << " is unable to attack " << target
		<< ", as they are dead 💀" << RESET << std::endl; 
	this->printStats();
}

/* reduce this' hp by amount damage */
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > 0)
	{
		this->hit_points -= amount;
		std::cout << BROWN << this->name << " has taken " << amount << " points of damage 💥" << RESET << std::endl;
	}
	else if (hit_points <= 0)
	{
		std::cout << BROWN << this->name << 
		" was attacked, but they are already dead 💀" << RESET << std::endl; 
	}
	this->printStats();
}

/* adds amount hit points 
requires 1 energy point */
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points >= 1 && this->hit_points > 0)
	{
		this->hit_points += amount;
		this->energy_points--;
		std::cout << BROWN << this->name << " repaired " << amount << \
			" hit points ➕" << RESET << std::endl;
	}
	else if (energy_points == 0)
		std::cout << BROWN << this->name << " is unable to repair itself "
		<< ", as they have insufficient energy points" << RESET << std::endl;
	else if (hit_points <= 0)
		std::cout << BROWN << this->name << " is unable to repair itself "
		<< ", as they are dead 💀" << RESET << std::endl; 
	this->printStats();
}

void ClapTrap::printStats()
{
	if (this->hit_points > 0 && this->energy_points > 0)
		std::cout << GREEN;
	else
		std::cout << RED;
	for (int i = 0; i < 28; i++)
		std::cout << "-";
	std::cout << std::endl;
	std::cout << this->name << std::endl;
	std::cout << "HP: " << this->hit_points << " Energy points: " << \
		this->energy_points << " Attack damage: " << this->attack_damage << std::endl << std::endl << RESET;
}