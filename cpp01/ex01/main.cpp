/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:20:26 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/12 20:23:40 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *ob = zombieHorde(3, "ali");
    int i = 0;

    while(i < 3)
    {
        ob[i].announce();
        i++;
    }
    delete []ob;
}
