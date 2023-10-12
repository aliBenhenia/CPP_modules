/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:20:45 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/12 15:47:46 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    int i = 0;
    Zombie *obj = new Zombie[N];

    while(i < N)
    {
        obj[i].setName(name);
        i++;
    }
    return (obj);
}