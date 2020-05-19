#include "headers.h"
#include <iostream>

using namespace Triplex;

int main()
{
    Game Execute;

    while(true)
    {
        Execute.PrintIntroduction();
        bool bLevelComplete = Execute.PlayGame();
        std::cin.clear();
        std::cin.ignore();
    }

    return 0;
}