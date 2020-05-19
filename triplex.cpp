#include "headers.h"
#include <iostream>

using namespace Triplex;

int main()
{
    Game Execute;
    int LevelDifficulty = 1;

    while(true)
    {
        Execute.PrintIntroduction(7);
        bool bLevelComplete = Execute.PlayGame();
        std::cin.clear();
        std::cin.ignore();

        if(bLevelComplete)
        {
            LevelDifficulty++;
        }
    }

    return 0;
}