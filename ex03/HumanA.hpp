/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:57:39 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 16:54:45 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    private:
    std::string name;
    Weapon A;
    
    public:
    HumanA(std::string n, Weapon w);
    void attack(void)
    {
       std::cout << this->name << " attacks with their " << A.getType() << std::endl;
    }
};