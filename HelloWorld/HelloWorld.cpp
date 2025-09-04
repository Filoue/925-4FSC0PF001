// HelloWorld.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

#include "FuctionsDice.h"





int main()
{
    char exitOrNot = 'z';

    int playerNb = 0;

    int scorePlayerOne = 0;
    int scorePlayerTwo = 0;

    bool playerOne = true;
    bool playerTwo = true;

    int diceResult = 0;

    std::cout << "How many players play?" << "\n";
    std::cin >> playerNb;

    for (int i = 0; i < playerNb; i++)
    {
        std::cout << i;
    }

    std::vector<int> players;
    std::vector<bool> playersInGame;
    
    for (int i = 0; i < playerNb; i++)
    {
        players.push_back(0);
        playersInGame.push_back(true);
    }
    
    InitDice();
    do
    {
        // Condition de stop de la partie
        int diceResult = 0;
        for (int indexPlayer = 0; indexPlayer < playerNb; indexPlayer++)
        {
            if (playersInGame.at(indexPlayer))
            {
                diceResult = Tirage();

                std::cout << "player" << indexPlayer << " play\n";
                std::cout << "DICE = " << diceResult << "\n";

                players.at(indexPlayer) += diceResult;
                playersInGame.at(indexPlayer) = PlayerLose(diceResult, players.at(indexPlayer));

                std::cout << "SCORE = " << players.at(indexPlayer) << std::endl << "\n";

                std::cout << "Do you want to stop ? (o/n)" << "\n";
                std::cin >> exitOrNot;

                if (exitOrNot == 'o')
                {
                    std::cout << "Player" << indexPlayer << " score :" << players.at(indexPlayer) << "\n";
                    playersInGame.at(indexPlayer) = false;
                }
            }
        }
        

        
    }while (true);
        

}
