#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 10, 20, 30, 40};
    int *p = arr;
    cout << *(p + 2) << '\t' << p[2] << '\t' << arr[2] << endl;
    // p[i] is the same as *(p + i)
    for (int *q = p + 4; p < q; p++)
    {
        cout << *p << '\t';
    }
    cout << '\n';
}