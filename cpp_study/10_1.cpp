#include <iostream>
#include <string>

using namespace std;

class student
{
    private:
    string name;
    double score;
    public: // interface
    student(string n, double s)
    {
        name = n;
        score = s;
    }
    friend ostream& operator<< (ostream &o, student s);
    friend istream& operator>> (istream &in, student &s);

};

ostream& operator<< (ostream &o, student s)
{
    o << s.name << ' ' << s.score << endl;
    return o;
}

istream& operator>> (istream &i, student &s)
{
    i >> s.name >> s.score;
    return i;
}

int main()
{
    student stu("L", 80.5);
    // stu.print();
    cin >> stu;
    cout << stu;
}
