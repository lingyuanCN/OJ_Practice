#include <iostream>
using namespace std;
int add(int x, int y = 2, int z = 3)
{
    return x + y + z;
}

int main()
{
    cout << add(5) << endl;
    cout << add(5, 7) << endl;
    cout << add(5, 7, 9) << endl;
}