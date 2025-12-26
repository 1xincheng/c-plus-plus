#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 10;

    if (a == b)
    {
        cout << "Line 1 - a 等于 b" << endl;
    }
    else
    {
        cout << "Line 1 - a 不等于 b" << endl;
    }
    if (a < b)
    {
        cout << "Line 2 - a 小于 b" << endl;
    }
    else
    {
        cout << "Line 2 - a 不小于 b" << endl;
    }
    if (a > b)
    {
        cout << "Line 3 - a 大于 b" << endl;
    }
    else
    {
        cout << "Line 3 - a 不大于 b" << endl;
    }
    /* change a and b values */
    a = 5;
    b = 20;
    if (a <= b)
    {
        cout << "Line 4 - a 小于或等于 b" << endl;
    }
    if (a >= b)
    {
        cout << "Line 5 - b 大于或等于 a" << endl;
    }
    return 0;
}