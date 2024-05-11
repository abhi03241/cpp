#include <iostream>
using namespace std;

class alpha
{
protected:
    int x;

public:
    alpha()
    {}
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
    beta()
    {}
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


class gamma 
{
    alpha a;
    beta b;
    int m;
    int n;

public:
    gamma(int p, float q, int r, int s) : a(p), b(q)
    {
        m = r;
        n = s;
        cout << "gamma initialized " << endl;
    }
    void show_mn()
    {
        cout << "The value of m is : " << m << endl;
        cout << "The value of n is : " << n << endl;
    }
      void show_alpha_beta()
    {
        a.show(); // Call show() of alpha
        b.show_y(); // Call show_y() of beta
    }
};

int main()
{
    alpha a;
    beta b;
    gamma g(5, 3.5, 5, 6);

    g.show_mn();
    g.show_alpha_beta();


    return 0;
}



