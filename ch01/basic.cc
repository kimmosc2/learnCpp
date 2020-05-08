// basic.cc learn basic standard I/O stream operate.
#include <iostream>

int main()
{
    std::cout << "Enter two number:" << std::endl;
    /* equivalent to:
     std::cout << "Enter two number:" 
     std::cout << std::endl;
    */

    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    /* equivalent to:
    std::cin >> v1;
    std::cin >> v2;
     */
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}