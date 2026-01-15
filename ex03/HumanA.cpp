/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:13:49 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/15 17:13:51 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string startname, Weapon &weapontype) :
        weapon(weapontype), name(startname) {};
		
void	HumanA::attack() {
	std::cout << name 
	<< " attacks with their " 
	<< weapon.getType() << std::endl;
}