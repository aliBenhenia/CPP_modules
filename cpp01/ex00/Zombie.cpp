#include "Zombie.hpp"

void Zombie :: announce()
{
    std :: cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie :: Zombie(std :: string n)
{
    name = n;
}

Zombie :: ~Zombie()
{
    std :: cout << name << " : destructor" << std::endl;
}
