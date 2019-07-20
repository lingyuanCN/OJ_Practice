// void swap(int x, int y)
// {
//     int t = x;
//     x = y;
//     y = t;
// }

void swap(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}

#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 4;
    cout << a << '\t' << b << endl;
    swap(a, b);
    cout << a << '\t' << b << endl;
}