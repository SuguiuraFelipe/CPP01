/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:26:06 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/21 16:56:47 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    Harl harl;
    harl.complain(argv[1]);

    return 0;
}
