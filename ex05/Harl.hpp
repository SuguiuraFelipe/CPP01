/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:26:04 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/21 16:32:46 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl
{
private:
    void debug();
    void info();
    void warning();
    void error();
public:
    void complain(std::string level);
};
