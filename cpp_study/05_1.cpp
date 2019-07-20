#include <iostream>
using namespace std;

template<typename T>
T add(T x, T y)
{
    return x + y;
}

int main()
{
    cout << add<int>(5, 3) << endl;
    cout << add<double>(5.3, 7.8) << endl;
    cout << add<string>("hello q", "world") << endl;
}