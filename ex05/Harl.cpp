/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:26:02 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/21 16:53:42 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug() {
    std::cout << "Eu amo ter bacon extra para o meu hambúrguer 7XL-duplo-queijo-triplo-picles-ketchup-especial. Eu realmente amo!" << std::endl;
}
void Harl::info() {
    std::cout << "Eu não acredito que adicionar bacon extra custa mais dinheiro. Vocês não colocaram bacon suficiente no meu hambúrguer! Se vocês tivessem colocado, eu não estaria pedindo por mais!" << std::endl;
}
void Harl::warning() {
    std::cout << "Eu acho que mereço ter bacon extra de graça. Eu venho aqui há anos, enquanto você começou a trabalhar aqui apenas no mês passado." << std::endl;
}
void Harl::error() {
    std::cout << "Isto é inaceitável! Eu quero falar com o gerente agora." << std::endl;
}

void Harl::complain(std::string level) {
    std::string levels[4];
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    void (Harl::*functions[4])();
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return;
        }
    }
}