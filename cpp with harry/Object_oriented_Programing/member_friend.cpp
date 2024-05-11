#include <iostream>
using namespace std;

//    forward DECLARATION
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sum_complex(complex, complex);
};

class complex
{
private:
    int a;
    int b;
    friend calculator :: sum_complex(complex , complex);

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "Your complex number is : " << a << " + " << b << "i" << endl;
    }
};

int calculator :: sum_complex(complex obj1, complex obj2)
{

    return (obj1.a + obj2.a);
}

int main()
{
    complex abhi, kk ;
    abhi.setdata(1, 2);
    kk.setdata(5, 7);

    calculator calc;
    int result = calc.sum_complex(abhi, kk);
    cout << "The sum of abhi and kk is " << result;
    return 0;
}