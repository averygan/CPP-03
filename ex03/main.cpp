/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:39:39 by agan              #+#    #+#             */
/*   Updated: 2024/05/08 19:39:41 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

// int main(void)
// {
// 	ClapTrap avery("Avery");
// 	ClapTrap dylan("Dylan");
// 	ScavTrap joe("Joe");
// 	FragTrap jane("Jane");

// 	dylan.attack("Random");
// 	dylan.takeDamage(5);
// 	joe.attack("Random");
// 	joe.guardGate();
// 	jane.attack("Random");
// 	jane.takeDamage(10);
// 	joe.takeDamage(50);
// 	joe.takeDamage(50);
// 	joe.beRepaired(5);
// 	avery.attack("Random_two");
// 	avery.takeDamage(5);
// 	avery.beRepaired(3);
// 	avery.takeDamage(8);
// 	avery.takeDamage(3);
// 	avery.attack("Random");
// 	jane.highFivesGuys();
// 	jane.takeDamage(90);
// 	jane.highFivesGuys();
// 	joe.guardGate();
// }

int main(void)
{
	DiamondTrap bing("Bing");

	bing.takeDamage(100);
	bing.attack("random");
	bing.whoAmI();
}