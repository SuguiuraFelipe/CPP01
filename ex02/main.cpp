/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:48:52 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/15 16:56:03 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
    std::string str = "Felipe Suguiura de Melo";
    std::string* ptr = &str;
    std::string& ref = str;

    std::cout << "Valor da string: " << str << std::endl;
    std::cout << "Valor via ponteiro: " << *ptr << std::endl;
    std::cout << "Valor via referencia: " << ref << std::endl;

    std::cout << "Endereco da string: " << &str << std::endl;
    std::cout << "Endereco guardado no ponteiro: " << ptr << std::endl;
    std::cout << "Endereco via referencia: " << &ref << std::endl;
}