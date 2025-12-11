/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:08:53 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 17:31:02 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->B->getType() << std::endl;
}

HumanB::HumanB(std::string str) : name(str)
{
}
void HumanB::setWeapon(Weapon &w)
{
    B = &w;
}
