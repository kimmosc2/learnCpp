// while141.cc input two number and print numbers between two numbers
#include <iostream>

int main()
{
    int start = 0, end = 0;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> start >> end;
    while (start < end)
    {
        std::cout << start << std::endl;
        ++start;
    }
    return 0;
}