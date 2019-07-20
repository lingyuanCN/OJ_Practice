#include <iostream>
using namespace std;

// dynamic memory allocation
int main()
{
    int *p = new int; // malloc, new initialize the variable
    *p = 3;
    cout << p << '\t' << *p << endl;
    delete p; // avoid memory leak

    p = new int;
    *p = 5;
    cout << p << '\t' << *p << endl;
    delete p;

}