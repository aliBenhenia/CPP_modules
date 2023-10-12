/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:58:15 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/13 13:39:53 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB :: HumanB(std :: string n) :weap(NULL), name(n)
{

        
}

HumanB :: HumanB(std :: string n, Weapon &obj)
{
    name = n;
    weap = &obj;
}

void HumanB :: attack()
{
    if(!weap)
        return;
    std :: cout << name << " attacks with their " << weap->getType() << "\n";
}

void HumanB :: setWeapon(Weapon &obj)
{
    weap = &obj;
}