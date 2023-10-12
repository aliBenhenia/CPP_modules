#include "Harl.hpp"

void Harl :: debug(void)
{
    std :: cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl :: info(void)
{
    std :: cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl :: warning(void)
{
    std :: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl :: error(void)
{
    std :: cout << "This is unacceptable! I want to speak to the manager now.\n";
}

int checkLevel(std :: string level)
{
    if (!level.compare("DEBUG"))
        return (0);
    if (!level.compare("INFO"))
        return (1);
    if (!level.compare("WARNING"))
        return (2);
    if (!level.compare("ERROR"))
        return (3);
    return -1;
}

void Harl :: complain(std::string level)
{
    void (Harl :: *ptr[4])(); 
    ptr[0] = &Harl :: debug;
    ptr[1] = &Harl :: info; 
    ptr[2] = &Harl :: warning;  
    ptr[3] = &Harl :: error;

    switch (checkLevel(level))
    {
    case 0:
        (this->*ptr[0])();
        break;
    case 1:
        (this->*ptr[1])();
        break;
    case 2:
        (this->*ptr[2])();
        break;
    case 3:
        (this->*ptr[3])();
        break;
    default:
        break;
    }
}