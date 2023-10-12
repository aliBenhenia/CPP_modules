/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:20:40 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/12 20:24:30 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie :: announce()
{
    std :: cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie :: Zombie()
{
    std :: cout << "default constructor\n";
}

void Zombie :: setName(std :: string n)
{
    name = n;
}

Zombie :: ~Zombie()
{
    std :: cout << name << " : destructor" << std::endl;
}
