// HelloWorld.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>


int main()
{
    char exitOrNot = 'n';

    int playerNb;
    std::vector<int> players;
    // Combien de joueur joue?
    std::cout << "How many players play?";
    std::cin >> playerNb;

    for (int i = 0; i < playerNb; i++)
    {
        players.insert(players.begin() + i, 0);
    }

    std::cout << players.size();

    do
    {
        for (int i = 0; i < players.size(); i++)
        {
            srand(time(nullptr));
            int diceResult = 1 + rand() % 6;
            std::cout << "player" << players[i] << " is playing\n";
            std::cout << "Dice = " << diceResult << std::endl;
            // Affichage du score
            players[i] += diceResult;
            std::cout << "SCORE = " << players[i] << std::endl;


            // Condition de stop de la partie
            if (diceResult == 1) {
                // la lose
                players[i] = 0;
                std::cout << players[i] << "Game over !!!!!!!!!!!!!" << std::endl;
                // C'est fini
                players.erase(players.begin() + i);
            }

            if (players[i] >= 20) {
                // la win
                std::cout << "You Win !!!!!!!!!!!" << std::endl;
                // C'est fini
                break;
            }
        

            std::cout << "Do you want to exit ?" << std::endl;
            std::cin >> exitOrNot;
        }

    }while (exitOrNot != 'y');

}
