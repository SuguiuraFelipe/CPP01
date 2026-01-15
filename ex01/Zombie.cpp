/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:00:43 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/15 16:45:48 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : zname(name){}

Zombie::~Zombie() {
    std::cout << zname << " is destroyed" << std::endl;
}

void Zombie::announce(void) {
    std::cout << zname << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string zname) {
    this->zname = zname;
}
