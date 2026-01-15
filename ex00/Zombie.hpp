/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <fsuguiur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:05:48 by fsuguiur          #+#    #+#             */
/*   Updated: 2026/01/14 16:35:15 by fsuguiur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
  private:
  std::string zname;
  
  public:
  Zombie(std::string zname);
  ~Zombie();

  void announce(void);
};

Zombie* newZombie(std::string zname);
void randomChump(std::string zname);

#endif
