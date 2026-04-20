/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:05:48 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/04/20 16:53:49 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
  private:
  std::string name;
  
  public:
  Zombie(std::string name);
  ~Zombie();

  void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
