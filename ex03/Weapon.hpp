/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wepon.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:12:42 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/15 17:12:44 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon {
    private:
        std::string type;
        
    public:
        Weapon(const std::string& weapontype); 
        std::string getType();
    	void setType(const std::string &weapontype);
};

#endif