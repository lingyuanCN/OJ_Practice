#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int &r = a;
    cout << a << '\t' << r << endl;
    r = 5;
    cout << a << '\t' << r << endl;
}

