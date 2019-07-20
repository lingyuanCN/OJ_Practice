#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student
{
    string name;
    double score;
    void print();
};

void student::print()
{
    cout << name << ' ' << score << endl;
}

int main()
{
    // student stu;
    // stu.name = "Paul";
    // stu.score = 95.5;
    // stu.print();

    vector<student> students;
    cout << students.size() << endl;
    while(true)
    {
        student stu;
        cout << "Please enter name and score:\n";
        cin >> stu.name >> stu.score;
        if (stu.score < 0)
        {
            break;
        }
        students.push_back(stu);
    }
    for (int i = 0; i < students.size(); i++)
    {
        students[i].print();
    }

    double max = 0, min = 100, average = 0;
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].score < min)
        {
            min = students[i].score;
        }
        if (students[i].score > max)
        {
            max = students[i].score;
        }
        average += students[i].score;
    }
    average = average / students.size();
    cout << "average: " << average << "\nmax: " << max << "\nmin: " << min << endl;
}
