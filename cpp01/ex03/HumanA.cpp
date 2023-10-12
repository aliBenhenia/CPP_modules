/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:57:16 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/13 17:51:43 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA :: attack()
{
    std :: cout << name << " attacks with their " << weap.getType() << "\n";
}

HumanA :: HumanA(std :: string n, Weapon &obj) : weap(obj)
{
    name = n;
}