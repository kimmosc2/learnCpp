// example.cc like while example,input two numbers, print sum of two numbers
#include <iostream>

int main()
{
    int sum;
    for (int val = 0; val <= 10; ++val)
        sum += val; //equivalent sum = sum + val;
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}