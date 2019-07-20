#include <string>
#include <iostream>

using namespace std;
int main()
{
    string s = "hello";
    string s2("world");
    cout << s.size() << endl;
    string s3 = s.substr(1, 3);
    cout << s3 << endl;

    string s4 = s + ' ' + s2;
    cout << s4 << endl;

    s4[0] = 'H';

    cout << s4 << endl;

    int pos = s4.find("orl");
    cout << pos << endl;
    s4.insert(11, "!");
    cout << s4 << endl;

    for(int i = 0; i < s4.size(); i++)
    {
        cout << s4[i] << endl;
    }
}