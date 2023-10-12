/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:15:04 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/23 20:28:48 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap :: FragTrap() : ClapTrap()
{
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_demage = 30;
    std :: cout << "default constructor of FragTrap called" << std :: endl;
}

FragTrap :: FragTrap(std :: string n) : ClapTrap(n)
{
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_demage = 30;
    std :: cout << "name constructor of FragTrap called" << std :: endl;
}

FragTrap :: FragTrap(const FragTrap &obj)
{
    this->name = obj.name;
    this->hit_point = obj.hit_point;
    this->energy_point = obj.energy_point;
    this->attack_demage = obj.attack_demage;
    std :: cout << "copy constructor of FragTrap called" << std :: endl;
}

FragTrap &FragTrap :: operator =(const FragTrap &obj)
{ 
    this->name = obj.name;
    this->hit_point = obj.hit_point;
    this->energy_point = obj.energy_point;
    this->attack_demage = obj.attack_demage;
    std :: cout << "assingnemt constructor of FragTrap called" << std :: endl;
    return (*this);
}

void FragTrap :: guardGate()
{
    std :: cout << "FragTrap is now in Gate keeper mode" << std :: endl;
}

void FragTrap :: highFivesGuys(void)
{
    std::cout << "Give me a high five!" << std::endl;
}

FragTrap :: ~FragTrap()
{
    std :: cout << "destructor of FragTrap called" << std :: endl;
}