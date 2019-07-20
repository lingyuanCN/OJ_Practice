#include <fstream>
#include <iostream>

using namespace std;
int main()
{
    ofstream oF("02_3.txt");
    oF << 3.14 << ' ' << "hello world\n";
    oF.close();
    ifstream iF("02_3.txt");
    double d;
    string str1, str2;
    iF >> d >> str1 >> str2;
    cout << d << ' ' << str1 << ' ' <<  str2 << endl;
    iF.close();
    return 0;
}