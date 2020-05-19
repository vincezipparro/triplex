#include "headers.h"
#include <iostream>

using namespace Triplex;

int main()
{
    Game Execute;
    int LevelDifficulty = 1;
    const int maxDifficulty = 10;

    while(true) // Loop game till all levels are completely
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

    return 0;
}