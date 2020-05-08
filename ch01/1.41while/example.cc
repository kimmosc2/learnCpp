// while.cc learn keyword--while
#include <iostream>

int main()
{
    int sum = 0, val = 50, flag = 100;
    std::cout << "Sum of " << val << " to "<< flag <<" inclusive is ";
    while (val <= flag)
    {
        sum += val;
        ++val;
    }
    std::cout << sum << std::endl;

    return 0;
}

