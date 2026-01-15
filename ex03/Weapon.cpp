/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wepon.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:13:18 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/15 17:13:19 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weapontype) : type(weapontype) {
};

std::string Weapon::getType() {
    return type;
};

void Weapon::setType(const std::string &weapontype) {
    type = weapontype;
};