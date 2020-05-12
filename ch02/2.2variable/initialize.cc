#include <iostream>

int main()
{
    double price = 109.99, discount = price * 0.6;

    int units_sold1 = 0;
    int units_sold2 = {0};
    int units_sold3{0};
    int units_sold4(0);

    long double ld = 3.1415926;
    // int a{ld}, b = {ld}; compile error:warning: narrowing conversion of 'ld' from 'long double' to 'int' inside { } [-Wnarrowing]
    int c(ld), d = ld;
}   