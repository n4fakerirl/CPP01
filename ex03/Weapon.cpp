/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:22:47 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/11 16:37:37 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string name)
{
	this->type = name;
}
Weapon::Weapon(std::string str)
{
	type = str;
}
std::string Weapon::getType(void)
{
	return (type);
}
