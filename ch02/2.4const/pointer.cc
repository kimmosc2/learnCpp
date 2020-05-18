#include <iostream>

int main()
{
    {
        // 指向常量的指针
        const double pi = 3.14;
        // double *ptr = &pi; error: ptr是一个普通指针

        const double *cptr = &pi; // cptr可以指向一个双精度常量
        // *cptr = 42; 错误:不能给*cptr赋值

        double dval = 3.14;
        cptr = &dval; // 正确,但不能通过cptr改变dval的值
    }

    {
        // 常量指针(存放在指针中的地址不能改变，即不变的是指针本身的值而非指向的那个值)
        int errNumb = 0;
        int *const curErr = &errNumb; // curErr将一直指向errNumb
        // *curErr =  5;
        // std::cout << *curErr << std::endl;
        const double pi = 3.14159;
        const double *const pip = &pi; // pip是一个指向常量对象的常量指针
        
    }


    return 0;
}