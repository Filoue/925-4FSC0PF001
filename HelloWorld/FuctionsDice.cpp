#include <iostream>
#include <vector>

#include "FuctionsDice.h"

void InitDice() 
{
    srand(time(nullptr));
}

int Tirage()
{
    return 1 + rand() % 6;
}

bool PlayerLose(int diceResult, int scorePlayer)
{
    
    if (diceResult == 1) 
    {
        // la lose
        scorePlayer = 0;
        std::cout << "Game over !!!!!!!!!!!!!" << "\n";
        // C'est fini
        return false;
    }

    if (scorePlayer > 20) 
    {
        return false;
    }
    return true;
}

bool CheckPlayersContinue(std::vector<bool> playersInGame)
{
    for (bool continu : playersInGame)
    {
        return true;
    }
    return false
}
