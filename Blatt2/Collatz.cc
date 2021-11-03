#include <iostream>

void collatz(int number)
{
    std::cout << "Die aktuelle Zahl ist " << number << std::endl;

    if (number == 1 || number == 0 || number == -1 || number == -5 || number == -17)
    { std::cout << "Das Ergebnis ist " << number << std::endl; }

    else
    {
        if (number % 2 == 0)
        { number = number / 2; }

        else
        { number = number * 3 + 1; }
        
        collatz(number);
    }
}

int main(int argc, char** argv)
{
    int eingabe = 0;
    std::cout << "Zahl eingeben " << std::flush;
    std::cin >> eingabe;

    collatz(eingabe);
}