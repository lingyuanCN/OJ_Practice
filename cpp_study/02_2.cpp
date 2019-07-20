#include <iostream>

using namespace std;

void help()
{
    cout << "======== Simple Calculator ========\n";
    cout << "Please enter: first_argument operator second_argument\n";
}

int main()
{
    while(true)
    {
        cout << "======== Simple Calculator ========\n";
        cout << "Please enter: first_argument operator second_argument\n";
        char s;
        double a, b;
        char op;
        cin >> a >> op >> b >> s;
                    switch (op)
            {
                case '+':
                    cout << a + b << endl;
                    break;
                case '-':
                    cout << a - b << endl;
                    break;
                case '*':
                    cout << a * b << endl;
                    break;
                case '/':
                    cout << a / b << endl;
                    break;

                default:
                    cout << "error" << endl;
                    break;
            }
        if (s == '='){
            continue;
        }
        else
        {
            break;
        }

        
    }
}