/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:21:19 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 16:38:11 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
    private:
    std::string type;

    public:
    std::string getType(void);
    Weapon(std::string str);
    void setType(std::string name);
};

class HumanB
{
    Weapon B;
    std::string name;
    void attack(void)
    {
        std::cout << this->name << " attacks with their " << this->B.getType() << std::endl;
    }
};