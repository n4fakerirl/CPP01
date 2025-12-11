/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:25:25 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 16:49:50 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

int main(void)
{
    Weapon club = Weapon("crude spiked club");
    //std::cout << club.getType() << std::endl;
    HumanA bob("BOB", club);
    bob.attack();
    // club.setType("some other type of club");
    // bob.attack()
}
