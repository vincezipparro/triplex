#include "headers.h"
#include <iostream>

using namespace Triplex;

int main()
{
    Game Execute;
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while(LevelDifficulty <= MaxDifficulty) // Loop game till all levels are completed
    {
        // Execute.PrintIntroduction(7);
        bool bLevelComplete = Execute.PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if(bLevelComplete)
        {
            LevelDifficulty++;
        }
    }

    std::cout << "You win the Game! exiting....\n";
    return 0;
}