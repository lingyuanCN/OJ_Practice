#include <iostream>
using namespace std;

class Point
{
    double x, y;
public:
    double operator[](int i) const// const function
    {
        if (i == 0)
        {
            return x;
        }
        else if (i == 1)
        {
            return y;
        }
        else throw "invalid index";
    }

    double& operator[](int i)
    {
        if (i == 0)
        {
            return x;
        }
        else if (i == 1)
        {
            return y;
        }
        else throw "invalid index";
    }

    Point operator+ (const Point q)
    {
        return Point(this->x + q[0], this->y + q[1]);
    }


    Point(double x_, double y_)
    {
        x = x_;
        y = y_;
    }

    friend ostream & operator<< (ostream &o, Point p);
    friend istream & operator>> (istream &i, Point &p);

};

ostream & operator<< (ostream &o, Point p)
{
    o << p.x << ' ' << p.y << endl;
    return o;
}
istream & operator>> (istream &i, Point &p)
{
    i >> p.x >> p.y;
    return i;
}

// Point operator+ (const Point p, const Point q)
// {
//     return Point(p[0] + q[0], p[1] + q[1]);
// }

int main()
{
    Point p(3.5, 4.8), q(1.2, 6.5);
    // cin >> p;
    cout << p;
    cout << p[0] << ' ' << p[1] << endl;
    p[0] = 3.14;
    p[1] = 6.28;
    cout << p[0] << ' ' << p[1] << endl;
    cout << "p: " << p << endl;
    cout << "q: " << q << endl;
    Point s = p + q; // operator+(p, q) and p.operator+(q)
    cout << "s: " << s << endl;
}