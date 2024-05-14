/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:39:46 by agan              #+#    #+#             */
/*   Updated: 2024/05/08 19:39:46 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <string>
#include <iostream>
#include <iomanip>

# define BROWN "\033[1;33m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define RESET "\033[0m"

class ClapTrap
{
public:
	// Constructors and destructors
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();

	// Overloaded operator
	ClapTrap &operator=(const ClapTrap &copy);

	// Public member functions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void printStats();

private:
	std::string name;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;
};

#endif