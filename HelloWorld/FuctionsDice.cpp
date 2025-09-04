#include <iostream>
#include "FuctionsDice.h"

int Tirage()
{
    std::srand(time(nullptr));
    return 1 + rand() % 6;
}