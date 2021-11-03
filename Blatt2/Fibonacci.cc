#include <iostream>

int fibonacci(int n)
{
    long f1 = 0;
    long f2 = 1;

    for (int i = 0; i <= n; ++i)
    {
        long fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        std::cout << fn << std::endl;
    } 

    return 0;
}

int main(int argc, char** argv)
{
    short n = 0;
    std::cout << "n eingeben " << std::flush;
    std::cin >> n;

    std::cout << "0" << std::endl;
    std::cout << "1" << std::endl;
    fibonacci(n);
}