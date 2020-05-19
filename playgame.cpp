#include "headers.h"
#include <iostream>

using namespace Triplex;

void Game::PrintIntroduction()
{
    std::cout << "\n\nYou are a secret agent breaking into a secure server room...\n";
    std::cout << "You need to enter the correct codes to continue...\n\n";
}

void Game::PlayGame()
{
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
        std::cout << "You win!\n";
    }
    else
    {
        std::cout << "You lose\n";
    }
           