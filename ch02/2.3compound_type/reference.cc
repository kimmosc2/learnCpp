#include <iostream>

int main()
{
    int ival = 1024;
    int &refVal = ival;
    // int &refVal2; compile error:reference must be initialized
    refVal = 2;            // equivalent to: ival = 2;
    int ii = refVal;       // equivalent to: ii = ival;
    int &refVal2 = refVal; // the refVal2 binding to ival;

    int i = 1024, i2 = 2048;
    int &r = i, r2 = i2;     // r is a reference,binding to i,r2 is int,value copyfrome i2.
    int i3 = 1024, &ri = i3; // i3 is int,ri is a reference,binding to i3.
    int &r3 = i3, &r4 = i2;  // r3 is a reference,binding to i3,r4 is a reference too,binding to i2.

    // int &refVal4 = 10; compile error: the initial value of the reference type must be an object.
    return 0;
}