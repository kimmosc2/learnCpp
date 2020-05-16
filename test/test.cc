#include <iostream>
int main()
{
    int a = 5;
    const int *b = &a;
    std::cout << *b << std::endl;
    
    return 0;
}