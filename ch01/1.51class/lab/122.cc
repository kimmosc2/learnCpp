#include <iostream>
#include "../Sales_item.h"

int main()
{
    Sales_item item1, item2;
    if (std::cin >> item2)
    {

        while (std::cin >> item1)
        {
            if (item1.isbn() == item2.isbn())
            {
                item2 += item1;
            }
            else
            {
                std::cout << "Data must refer to same ISBN" << std::endl;
                break;
            }
        }
        std::cout <<"ISBN: "<< item2.isbn() <<", Sum: " << item2 << std::endl;
    }
    return 0;
}