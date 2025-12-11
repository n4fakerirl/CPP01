/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:35:09 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 17:13:45 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << A.getType() << std::endl;
}

HumanA::HumanA(std::string str, Weapon &n) : name(str), A(n)
{
}
