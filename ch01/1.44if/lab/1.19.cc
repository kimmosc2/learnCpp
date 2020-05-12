// update for 1.14
#include <iostream>

int main()
{
    int start = 0, end = 0;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> start >> end;
    if (start > end)
        while (start > end)
        {
            std::cout << start << std::endl;
            --start;
        }
    else
        while (start < end)
        {
            std::cout << start << std::endl;
            ++start;
        }

    return 0;
}