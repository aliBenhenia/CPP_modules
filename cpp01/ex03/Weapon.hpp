/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:47:29 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/12 21:11:14 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>

class Weapon{
    private :
        std :: string type;
    public :
        Weapon();
        Weapon(std :: string t);
        const std :: string &getType() const;
        void setType(std :: string s);
};

#endif

