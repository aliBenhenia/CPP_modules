/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:08:30 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/24 13:07:08 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap :: ScavTrap() : ClapTrap()
{
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_demage = 20;
    std :: cout << "default constructor of ScavTrap called" << std :: endl;
}

ScavTrap :: ScavTrap(std :: string n) : ClapTrap(n) 
{
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_demage = 20;
    std :: cout << "name constructor of ScavTrap called" << std :: endl;
}

ScavTrap :: ScavTrap(const ScavTrap &obj)
{
    this->name = obj.name;
    this->hit_point = obj.hit_point;
    this->energy_point = obj.energy_point;
    this->attack_demage = obj.attack_demage;
    std :: cout << "copy constructor of ScavTrap called" << std :: endl;
}

ScavTrap &ScavTrap :: operator =(const ScavTrap &obj)
{ 
    this->name = obj.name;
    this->hit_point = obj.hit_point;
    this->energy_point = obj.energy_point;
    this->attack_demage = obj.attack_demage;
    std :: cout << "assingnemt constructor of ScavTrap called" << std :: endl;
    return (*this);
}

void ScavTrap :: guardGate()
{
    std :: cout << "ScavTrap is now in Gate keeper mode" << std :: endl;
}

void ScavTrap :: attack(const std::string& target)
{
    std :: cout << "ClapTrap " << name << " attacks " << target <<" causing " << attack_demage << " points of damage!" << std::endl;
}

ScavTrap :: ~ScavTrap()
{
    std :: cout << "destructor of ScavTrap called" << std :: endl;
}