#include <iostream>

int main()
{
    int sum;
    for (int i = -100; i <= 100; i++)
        sum += i;
    std::cout << sum << std::endl;
    return 0;
}