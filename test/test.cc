#include <iostream>

int main()
{
    int a = 5;
    int b = 6;

    // 指向常量的指针(pointer to const)
    const int *cpa = &a; // 不可以通过cpa更改a的值(因为cpa觉得自己指向的是一个常量),但a本身不受影响,可以直接更改a的值,且可以将cpa更改绑定到其他地址,cpa是一个底层指针
    cpa = &b;            // 正确
    *cpa = 7;            // 错误

    // 常量引用
    const int &cra = a; // 不可以通过cra更改a的值,但a本身不受影响,同时reference不能更改绑定的对象,其行为类似 const int *const name(指向常量对象的常量指针)
    cra = 7;            // 错误,不能通过cra更改a的值
    &cra = b;           // 错误,reference一经初始化就无法更改绑定的对象

    // 常量指针(const pointer)
    int *const c = &a; // c的地址不可以更改,类似普通reference的行为,c始终指向a,可以通过c更改a的值,c是顶层指针
    *c = 7;            // 正确
    c = &b;            // 错误
    const int *const d = &a; // 指向常量对象的常量指针,不可以重新更改d的指向对象,也无法通过d更改a的值,类似const reference的行为
    
    
    return 0;
}