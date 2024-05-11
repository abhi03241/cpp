#include <iostream>
using namespace std;

class alpha
{
protected:
    int x;

public:
    alpha(int i)
    {
        x = i;
        cout << "Alpha initialized " << endl;
    }
    void show()
    {
        cout << "The value of x is : " << x << endl;
    }
};

class beta
{
protected:
    float y;

public:
    beta(float i)
    {
        y = i;
        cout << "beta initialized " << endl;
    }
    void show_y()
    {
        cout << "The value of y is : " << y << endl;
    }
};

class gamma : public beta, public alpha
{
protected:
    int m;
    int n;

public:
    gamma(int i, float j, int k, int l) : alpha(i),beta(j)
    {
        m = k;
        n = l;
        cout << "gamma initialized " << endl;
    }
    void show_mn()
    {
        cout << "The value of m is : "<<m << endl;
        cout << "The value of n is : " << n << endl;
    }
};

int main()
{
    gamma g(5, 3.5, 5, 6);
    g.show();
    g.show_y();
    g.show_mn();

    return 0;
}

// class gamma : public beta, public alpha
// {
// protected:
//     int m;
//     int n;

// public:
//     gamma(int i, float j, int k, int l) : alpha(i),beta(j)
//     {
//         m = k;
//         n = l;
//         cout << "gamma initialized " << endl;
//     }
//     void show_mn()
//     {
//         cout << "The value of m is : "<<m << endl;
//         cout << "The value of n is : " << n << endl;
//     }
// };