#include <iostream>

int main(int argc, char** argv)
{
    int n = 10;
    // calculate the sum of all numbers from 1 to n
    int sum = 0;
    for (int j = 1; j <= n; j++)
    {
        sum += j;
    }
    std::cout << sum << std::endl;
    return 0;
}