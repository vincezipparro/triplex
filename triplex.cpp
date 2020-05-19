#include "headers.h"
#include <iostream>
#include <ctime>

using namespace Triplex;


int main()
{
    srand(time(NULL)); // creates new random sequence based on time of day

    Game Execute;
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while(LevelDifficulty <= MaxDifficulty) // Loop game till all levels are completed
    {
        bool bLevelComplete = Execute.PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if(bLevelComplete)
        {
            LevelDifficulty++;
        }
    }

    std::cout << "~~~~ You win the Game! exiting.... ~~~~\n";
    return 0;
}