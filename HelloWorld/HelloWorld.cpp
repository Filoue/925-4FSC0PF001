// HelloWorld.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

#include "FuctionsDice.h"





int main()
{
    char exitOrNot = 'z';

    int playerNb = 0;

    int diceResult = 0;

    std::vector<int> players;
    std::vector<bool> playersInGame;

    std::cout << "How many players play?" << "\n";
    std::cin >> playerNb;

    for (int i = 0; i < playerNb; i++)
    {
        players.push_back(0);
        playersInGame.push_back(true);
    }
    
    InitDice();


    do
    {
        // Condition de stop de la partie
        for (int indexPlayer = 0; indexPlayer < playerNb; indexPlayer++)
        {
            if (playersInGame.at(indexPlayer))
            {
                diceResult = Tirage();

                std::cout << "player" << indexPlayer << " play\n";
                std::cout << "DICE = " << diceResult << "\n";

                // Ajout du score au joueur en jeu.
                players.at(indexPlayer) += diceResult;
                playersInGame.at(indexPlayer) = PlayerLose(diceResult, players.at(indexPlayer));

                // Affichage du score joueur
                std::cout << "SCORE = " << players.at(indexPlayer) << std::endl << "\n";

                std::cout << "Do you want to stop ? (o/n)" << "\n";
                std::cin >> exitOrNot;

                // Si le joueur sort on affiche le score et on désactie le joueur.
                if (exitOrNot == 'o')
                {
                    std::cout << "Player" << indexPlayer << " score :" << players.at(indexPlayer) << "\n";
                    playersInGame.at(indexPlayer) = false;
                }
            }
        }
    }while (CheckPlayersContinue(playersInGame));

    int bestScore = 0;
    int idxWinner = -1;

    for  (int idxPlayer = 0; idxPlayer < playerNb; idxPlayer++)
    {
        if (playersInGame[idxPlayer] > bestScore)
        {
            bestScore = playersInGame[idxPlayer];
            idxWinner = idxPlayer;
        }
    }
}
