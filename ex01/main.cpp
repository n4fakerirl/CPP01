/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:49:30 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 14:37:52 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 0)
        return (NULL);
    Zombie *zombs = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        zombs[i].set_name(name);
        zombs[i].announce();
    }
    return (zombs);
}

void delete_zomb(Zombie *zombs)
{
    delete[] zombs;
}

int main(void)
{
    Zombie *a = zombieHorde(10, "Hehe");
    delete_zomb(a);
}
