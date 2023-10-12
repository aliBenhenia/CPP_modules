/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:58:17 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/13 13:33:32 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
    private :
        Weapon *weap;
        std :: string name;
    public :
        HumanB(std :: string n);
        HumanB(std :: string n ,Weapon &obj);
        void attack();
        void setWeapon(Weapon &obj);
};
 
#endif