#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v = { 7, 5, 16 ,8 };
    v.push_back(25);
    v.push_back(13);
    v.insert(v.begin(), 8);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\t';
    }
    cout << '\n';
    
    v.insert(v.begin(), {12});
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\t';
    }
    cout << '\n';
    v.insert(v.begin()+2, 1);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\t';
    }
    cout << '\n';

    v.insert(v.end(), 3);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\t';
    }
    cout << '\n';

    v.insert(v.end(), 2, 100);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\t';
    }
    cout << '\n';

    v.pop_back();
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\t';
    }
    cout << '\n';

    v.resize(5);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\t';
    }
    cout << '\n';

    v.resize(10);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\t';
    }
    cout << '\n';
}