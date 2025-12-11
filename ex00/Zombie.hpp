/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:40:32 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 16:18:21 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
    private:
    std::string _name;

    public:
    std::string get_name(void);
    void set_name(std::string name);
    void announce(void);
    ~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);