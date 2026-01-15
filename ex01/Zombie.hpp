/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:05:48 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/15 16:35:20 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
  private:
  std::string zname;
  
  public:
  Zombie();
  Zombie(std::string zname);
  ~Zombie();

  void announce(void);
  void setName(std::string zname);
};

Zombie* zombieHorde(int n, std::string zname);

#endif
