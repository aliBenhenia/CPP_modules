/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:21:36 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/23 20:24:52 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
#include <string>

class ClapTrap{
    protected :
        std :: string name;
        int hit_point;
        int energy_point;
        int attack_demage;
    public :
        ClapTrap();
        ClapTrap(std :: string n);
        ClapTrap(const ClapTrap &obj);
        ClapTrap & operator =(const ClapTrap &obj);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();
};

#endif