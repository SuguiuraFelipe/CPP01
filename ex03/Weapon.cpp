/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:13:18 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/04/20 17:49:42 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weapontype) : type(weapontype)
{
}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string& weapontype)
{
    type = weapontype;
}