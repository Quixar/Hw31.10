#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int* pa = &a;
    int* pb = &b;
    cout << (pb - pa) * 4;
}