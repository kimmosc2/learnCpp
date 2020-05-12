#include <iostream>

int main()
{
    int i = 0, *p = &i;
    // equivalent to: if(p!=nullptr)
    if (p)
        std::cout << p << std::endl;
    // equivalent to: if(i!=0)
    if (*p)
        std::cout << *p << std::endl;
    return 0;
}