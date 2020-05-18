#include <iostream>

int main ()
{
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";
    std::cout << std::endl;

    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 12;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "There are three numbers in the code" << std ::endl;
    std::cout << "The codes add up to: " << CodeSum << std::endl;
    std::cout << "The codes product is: " << CodeProduct << std::endl;
}