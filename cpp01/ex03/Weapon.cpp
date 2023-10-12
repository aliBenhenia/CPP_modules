#include "Weapon.hpp"

Weapon :: Weapon(){}
Weapon :: Weapon(std :: string t)
{
    type = t;
}

const std :: string &Weapon :: getType() const
{
    return (type);
}

void Weapon :: setType(std :: string s)
{
    type = s;
}

