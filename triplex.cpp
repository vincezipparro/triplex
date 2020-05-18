#include <iostream>

int main ()
{
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";
    std::cout << std::endl;

    const int a = 4;
    const int b = 8;
    const int c = 12;

    const int sum = a + b + c;
    const int mult = a * b * c;

    std::cout << sum << std::endl;
    std::cout << mult;
    std::cout<< std::endl;
}