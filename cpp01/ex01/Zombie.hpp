/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:20:28 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/12 20:25:00 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>

class Zombie
{
    private :
        std :: string name;
    public :
        Zombie();
        void announce();
        void setName(std :: string n);
        ~Zombie();
        
};

Zombie* zombieHorde( int N, std::string name);
#endif