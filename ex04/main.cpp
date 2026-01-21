/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:42:09 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/21 16:18:31 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string replaceLine(std::string line, const std::string& s1, const std::string& s2) {
    size_t pos;
    while ((pos = line.find(s1)) != std::string::npos) {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
    }
    return line;
}


int main(int ac, char **av) {
    if (ac != 4)
        return (1);
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1.empty())
        return (1);
    std::ifstream infile(av[1]);
    if (!infile.is_open()) {
        std::cout << "Error to open the file\n";
        return (1);
    }
    std::string outname = std::string(av[1]) + ".replace";
    std::ofstream outfile(outname.c_str());
    if (!outfile.is_open())
        return (1);
    std::string line;
    while (std::getline(infile, line)) {
        line = replaceLine(line, s1, s2);
        outfile << line << std::endl;
    }
    return (0);
}