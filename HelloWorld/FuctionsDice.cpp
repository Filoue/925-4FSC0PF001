#include <iostream>
#include "FuctionsDice.h"

int Tirage(int a)
{
    std::srand(time(nullptr));
    return a = 1 + rand() % 6;
}