/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:11:10 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/23 20:11:12 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ClapTrap :: ClapTrap() :
                        name("fakeName"),
                        hit_point(10),
                        energy_point(10),
                        attack_demage(0)
{
    std :: cout << "default constructor called " << std :: endl;
}

ClapTrap :: ClapTrap(std :: string n) : 
                        name(n),
                        hit_point(10),
                        energy_point(10),
                        attack_demage(0)
{
    std :: cout << name << " constructor called " << std :: endl;
}

ClapTrap :: ClapTrap(const ClapTrap &obj):
                        hit_point(obj.hit_point),
                        energy_point(obj.energy_point),
                        attack_demage(obj.attack_demage)
{   
    std :: cout << "copy constructor called " << std :: endl;
}

ClapTrap &ClapTrap :: operator =(const ClapTrap &obj)
{
    hit_point         = obj.hit_point;
    energy_point     = obj.energy_point;
    attack_demage    = obj.attack_demage;
    std :: cout << "copy assignement constructor called " << std :: endl;
    return (*this);
}

void ClapTrap :: attack(const std::string& target)
{
    if (hit_point <= 0 || energy_point <= 0)
    {
        std :: cout << name <<  " can't attack " << std :: endl;
        return ;
    }
    energy_point--;
    std :: cout << "ClapTrap " << name << " attacks " << target <<" causing " << attack_demage << " points of damage!" << std::endl;
}

void ClapTrap :: takeDamage(unsigned int amount)
{
    if (hit_point <= 0)
    {
        std :: cout << name <<  " can't take damage " << std :: endl;
        return ;
    }
    hit_point -= amount;
    std :: cout << name <<  " takes " << amount << " points " << std :: endl;
    if (hit_point <= 0)
        std :: cout << name <<  " has been losed " << std :: endl;
}

void ClapTrap :: beRepaired(unsigned int amount)
{
    if (energy_point <= 0)
    {
        std :: cout << name <<  " can't Repaired " << std :: endl;
        return ;
    }
    hit_point += amount;
    energy_point--;
    std :: cout << name <<  " takes " << amount << " points " << std :: endl;
}

ClapTrap :: ~ClapTrap()
{
    std :: cout << "destructor called" << std :: endl;
}

