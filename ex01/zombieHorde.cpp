/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:01:23 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/04/20 16:53:49 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name) {
    if (n <= 0)
        return 0;
    Zombie* z = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        z[i].setName(name);
    }
    return z; 
}