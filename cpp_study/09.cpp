#include <iostream>
#include <string>
#include <vector>

using namespace std;

class student
{
    private:
    string name;
    double score;
    public: // interface
    student() 
    {

    }
    student(string n, double s)
    {
        name = n;
        score = s;
    }
    void print();
    void set_name(string n)
    {
        name = n;
    }
    string get_name()
    {
        return name;
    }
    void set_score(double s)
    {
        score = s;
    }
    double get_score()
    {
        return score;
    }
};

void student::print()
{
    cout << name << ' ' << score << endl;
}

int main()
{
    student stu("L", 80.5);
    stu.print();
    student students[3];// default constructor
}
