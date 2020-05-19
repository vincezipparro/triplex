#include "headers.h"
#include <iostream>

using namespace Triplex;

void Game::PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room...\nYou need to enter the correct codes to continue...\n\n";
}

bool Game::PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 12;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "There are three numbers in the code\n";
    std::cout << "\nThe codes add up to: " << CodeSum;
    std::cout << "\nThe codes product is: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >>  GuessA >> GuessB >> GuessC;
    std::cout << "\nYou entered: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win! now onto the next level\n";
        return true;
    }
    else
    {
        std::cout << "You lose, please try again\n";
        return false;
    }
}
