#include <iostream>
using namespace std;
int add(int x, int y = 2)
{
    return x + y;
}

double add(double x, double y = 2.0)
{
    return x + y;
}

int main()
{
    cout << add(5, 3) << endl;
    cout << add(5.3, 7.8) << endl;
}