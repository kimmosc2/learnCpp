#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum;
    if (std::cin >> sum)
    {
        Sales_item temp;
        while (std::cin >> temp)
        {
            if (temp.isbn() == sum.isbn())
            {
                sum += temp;
            }
            else
            {
                std::cout << sum << std::endl;
                sum = temp;
            }
        }
        std::cout << sum << std::endl; 
    }
    else
    {
        std::cerr << "no data?!" << std::endl;
        return -1;
    }
    return 0;
}