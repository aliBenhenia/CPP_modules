/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:18:24 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/14 09:54:22 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"


int main(int ac, char **av)
{
    if (ac != 4 || av[2][0] == '\0' || av[3][0] == '\0')
    {
        std :: cout << "invalid argument\n";
        return 0;
    }
    std :: string line;
    std :: ofstream replace(getFileReplace(av[1]));
    std :: ifstream file(av[1]);
    if (file.is_open() && replace.is_open())
    {
        while (getline(file, line))
        {
            while (line.find(av[2]) != std :: string :: npos)
                replaceSubstr(&line,av[2], av[3], line.find(av[2]));
            replace << line << std :: endl;
        }
        file.close();
        replace.close();
    }
    else
         std :: cout << "fail to open file" << std :: endl;
    return 0;
}

