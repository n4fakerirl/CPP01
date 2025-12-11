/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:49:30 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 11:14:07 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    randomChump("Oceane");
    randomChump("Test");
    Zombie *b = newZombie("Lea");
    Zombie *d = newZombie("Emilie");
    b->announce();
    d->announce();
    b->destructor();
    d->destructor();
}
