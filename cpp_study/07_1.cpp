#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *p = &a;
    cout << p << '\t' << &a << endl;
    cout << *p << '\t' << a << endl;
    *p = 5;
    cout << *p << '\t' << a << endl;

    int *q = p;
    cout << *p << '\t' << *q << '\t' << a << endl;
}