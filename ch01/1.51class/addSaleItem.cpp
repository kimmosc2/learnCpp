#include <iostream>
#include "Sales_item.h"

int main()
{
    std::cout << "hello" << std::endl;
    Sales_item item1,item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    return 0;
}