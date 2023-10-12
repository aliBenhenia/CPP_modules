#include "Zombie.hpp"

int main()
{
    Zombie *obj = newZombie("ali");
    obj->announce();

    randomChump("khalid");

    delete obj;
    return 0;
}