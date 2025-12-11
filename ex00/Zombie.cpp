/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:03:19 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 16:18:05 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::get_name(void)
{
        return (_name);
}

void Zombie::set_name(std::string name)
{
     _name = name; 
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    std::cout << _name << " destroyed" << std::endl;
}
