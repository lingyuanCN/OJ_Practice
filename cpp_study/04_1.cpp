#include <iostream>
using namespace std;
void print(char ch, int n = 1)
{
    for(int i = 0; i < n; i++)
    {
        cout << ch;
    }
}

int main()
{
    print('*'); cout << endl;
    print('*', 3); cout << endl;
    print('*', 5); cout << endl;
}