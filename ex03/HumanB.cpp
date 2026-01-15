/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:14:45 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/15 17:14:54 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string startname) : weapon(0), name(startname) {};

void HumanB::setWeapon(Weapon &weapontype) {
    weapon = &weapontype;
};

void HumanB::attack() {
    std::cout << name 
	<< " attacks with their " 
	<< weapon->getType() << std::endl;
};