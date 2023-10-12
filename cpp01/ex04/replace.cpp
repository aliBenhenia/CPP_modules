/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:18:17 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/14 09:53:46 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void replaceSubstr(std :: string *str,std :: string s1, std :: string s2, int pos)
{
	std :: string prefstr = str->substr(0, pos);
	std :: string poststr = str->substr(pos + s1.length());
	*str = prefstr + s2 + poststr;
}
std :: string getFileReplace(std :: string file)
{
	std :: string fileName = file + ".replace";

	return (fileName);
}

