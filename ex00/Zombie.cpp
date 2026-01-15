/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:15:48 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/14 16:29:00 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : zname(name){}

Zombie::~Zombie() {
    std::cout << zname << " is destroyed" << std::endl;
}

void Zombie::announce(void) {
    std::cout << zname << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
