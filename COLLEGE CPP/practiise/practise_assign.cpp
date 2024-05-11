#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    friend ostream &operator<<(ostream &, complex &);
    friend istream &operator>>(istream &, complex &);
};

istream &operator>>(istream &din, complex &c)
{
    din >> c.real;
    din >> c.imag;
    return din;
}

ostream &operator<<(ostream &dout, complex &c)
{
    dout <<"real part is :" <<c.real<<endl;
    dout <<"imag part is :"<< c.imag;
    return dout;
}

int main()
{  
    complex c1 ,c2;
    cin>>c1>>c2;

    cout<<c1<<endl<<c2;

    return 0;
}