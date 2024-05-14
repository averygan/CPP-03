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

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap avery("Avery");
	ClapTrap dylan("Dylan");
	ScavTrap joe("Joe");

	dylan.attack("Random");
	dylan.takeDamage(5);
	joe.attack("Random");
	joe.guardGate();
	joe.takeDamage(50);
	joe.takeDamage(50);
	joe.beRepaired(5);
	avery.attack("Random_two");
	avery.takeDamage(5);
	avery.beRepaired(3);
	avery.takeDamage(8);
	avery.takeDamage(3);
	avery.attack("Random");
	joe.guardGate();
}