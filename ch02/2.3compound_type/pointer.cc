#include <iostream>
#include <cstdlib>

int main()
{
    {
        int *ip1, *ip2;  // ip1 and ip2 both are pointer of int type
        double dp, *dp2; // dp is double type,dp2 is pointer of double

        int ival = 42;
        int *p = &ival; // p save variable ival address

        double dval;
        double *pd = &dval; // 正确:初始值是double型对象的地址
        double *pd2 = pd;   // 正确:初始值是指向double对象的指针

        // int *pi = pd; 错误:指针pi的类型和pd的类型不匹配
        // pi = &dval;  错误:试图把double类型的对象的地址赋值给int指针
    }

    // null pointer
    {
        int *p1 = nullptr; // equivalent to: int *p1 = 0;
        int *p2 = 0;       // pointerp2 = 0

        // need #include cstdlib
        int *p3 = NULL; // equivalent to: int *p3 = 0;
    }

    // void pointer
    {
        double obj = 3.14, *pd = &obj; // void*能存放任意类型对象的地址
        void *pv = &obj;               // obj可以是任意类型的对象
        pv = pd;                       // pv 可以存放任意类型的指针
    }

    {
        int ival = 1024;
        int *pi = &ival; // pi指向一个int型的数
        int **ppi = &pi; // ppi指向一个int型的指针,如果要通过ppi访问ival的值,需要解引用两次
    }

    int *ippppp;
    std::cout << ippppp << std::endl;

    return 0;
}