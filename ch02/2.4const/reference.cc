#include <iostream>
int main()
{
    {
        const int ci = 1024;
        const int &ri = ci;
        // ri = 42; compile error:ri is a reference for ci
        // int &r2 = ci; compile error:r2 is not reference,but ci is.
    }

    {
        int i = 42;
        const int &r1 = i;
        const int &r2 = 42;
        const int &r3 = r1 * 2;
        // int &r4 = r1 *2; wrong 

        /* std::cout << r1 << std::endl;
         *i = 2;
         *std::cout << r1 << std::endl;
         */
        // i can be changed,and r1 will be changed too.
    }

    return 0;
}