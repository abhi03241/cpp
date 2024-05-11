#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;

public:
    //   ----> FRIEND FUNCTION
    friend complex setdata_bysum(complex obj1, complex obj2);

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
complex setdata_bysum(complex obj1, complex obj2)
{
    complex obj3;
    obj3.setdata((obj1.a + obj2.a), (obj1.b + obj2.b));
    return obj3;
}

int main()
{
    complex c1, c2, sum;

    c1.setdata(7, 8);
    c1.printnumber();

    c2.setdata(3, 5);
    c2.printnumber();

    sum =  setdata_bysum(c1,c2);
    sum.printnumber();

    return 0;
}