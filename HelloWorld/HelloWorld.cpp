// HelloWorld.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

#include "FuctionsDice.h"





int main()
{
    char exitOrNot = 'z';

    int scorePlayerOne = 0;
    int scorePlayerTwo = 0;

    bool playerOne = true;
    bool playerTwo = true;

    int diceResult = 0;
    
    InitDice();
    do
    {
        // Condition de stop de la partie
        int diceResult = 0;
        
        if (playerOne)
        {
           diceResult = Tirage();
           std::cout << "playerOne play\n";
           std::cout << "DICE = " << diceResult << "\n";
           scorePlayerOne += diceResult;
           playerOne = PlayerLose(diceResult, scorePlayerOne);
           std::cout << "SCORE = " << scorePlayerOne << std::endl << "\n";

           std::cout << "Do you want to stop ? (o/n)" << "\n";
           std::cin >> exitOrNot;
           if (exitOrNot == 'o')
           {
               std::cout << "PlayerOne score : " << scorePlayerOne << "\n";
               playerOne = false;
           }
        }
        
        if (playerTwo)
        {
           diceResult = Tirage();
           std::cout << "playerTwo play\n";
           std::cout << "DICE = " << diceResult << "\n";
           scorePlayerTwo += diceResult;
           playerTwo = PlayerLose(diceResult, scorePlayerTwo);
           std::cout << "SCORE = " << scorePlayerTwo << std::endl << "\n";

           std::cout << "Do you want to stop ? (o/n)" << "\n";
           std::cin >> exitOrNot;
           if (exitOrNot == 'o')
           {
               std::cout << "PlayerTwo score : " << scorePlayerTwo << "\n";
               playerTwo = false;
           }
        }
        
    }while (playerOne && playerTwo);

}
