/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:15:02 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/24 13:08:42 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARTRAP_H
#define SCARTRAP_H
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public :
    FragTrap();
    FragTrap(std :: string n);
    FragTrap(const FragTrap &obj);
    FragTrap &operator=(const FragTrap &obj);
    void guardGate();
    void highFivesGuys(void);
     ~FragTrap();
};

#endif