// example.cc 1.43 compute sum of input numbers until EOF
#include <iostream>

int main()
{
    int sum, val;
    for (; std::cin >> val;)
        sum += val;
    // equivalent to:
    // while (std::cin >> val)
    // {
    //     sum +=val;
    // }
    std::cout << sum << std::endl;
    return 0;
}