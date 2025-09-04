// HelloWorld.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

#include "FuctionsDice.h"


int main()
{
    char exitOrNot = 'n';

    int scorePlayerOne = 0;
    int scorePlayerTwo = 0;

    bool playerOne = true;
    bool playerTwo = true;

    int diceResult = 0;
    

    do
    {
        while (playerOne == true)
        {
            diceResult = Tirage();
            // Condition de stop de la partie
            std::cout << "DICE = " << diceResult << "\n";

            if (diceResult == 1)
            {
                scorePlayerOne = 0;
                playerOne = false;
            }
            else
            {
                scorePlayerOne += diceResult;

            }

            if (scorePlayerOne > 20 || diceResult == 1) {
                // la lose
                scorePlayerOne = 0;
                std::cout << "Game over !!!!!!!!!!!!!" << "\n";
                playerOne = false;
                // C'est fini
                break;
            }
            std::cout << "SCORE = " << scorePlayerOne << std::endl << "\n";


            std::cout << "Do you want to stop ? (y/n)" << "\n";
            std::cin >> exitOrNot;
        }
        


    }while (exitOrNot != 'y');

}
