#include <iostream>
using namespace std;

class Shape
{
protected:
    int x, y, area;

public:
    Shape()
    {
        x = 0;
        y = 0;
    }
    virtual void set_data() = 0;
    virtual int calc_area() = 0;
    virtual void get_data() = 0;
};

class rectangle : public Shape
{

public:
    void set_data()
    {
        cout << "Enter the dimensions of Rectangle " << endl;
        cin >> x >> y;
    }
    int calc_area()
    {
        area = x * y;
        return area;
    }
    void get_data()
    {
        cout << "the area of rectangle " << area << endl;
    }
};

class triangle : public Shape
{

public:
    void set_data()
    {
        cout << "Enter the dimensions of Triangle " << endl;
        cin >> x >> y;
    }
    int calc_area()
    {
        area = (x * y) / 2;
        return area;
    }
    void get_data()

    {
        cout << "the area of triangle " << area << endl;
    }
};

void f(Shape &s)
{
    s.set_data();
    s.calc_area();
    s.get_data();
}

int main()
{
    rectangle r1;
    // r1.get_data();
    // r1.calc_area();
    // r1.get_data();

    triangle t1;
    // t1.get_data();
    // t1.calc_area();
    // t1.get_data();

    f(r1);

    f(t1);

    return 0;
}
