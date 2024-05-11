#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    complex()
    {
        real = 0 ;
        imag = 0;
    }

    complex(int r, int im)
    {
        real = r;
        imag= im ;

    }

    complex operator+(complex &);

    complex operator-(complex &);

    complex operator*(complex &);

    friend complex operator*(int ,complex &);

    void display()
    {
        cout<<"complex number is :"<<real<<" +i"<<imag<<endl;
    }
};

complex complex :: operator+(complex &c)
{
    complex result;

    result.real = real + c.real;
    result.imag = imag + c.imag;

    return result ;

}

complex complex :: operator-(complex &c)
{
    complex result;

    result.real = real - c.real;
    result.imag = imag - c.imag;

    return result ;

}

complex complex :: operator*(complex &c)
{
    complex result;

    result.real = real * c.real;
    result.imag = imag * c.imag;

    return result ;

}

complex operator*(int a ,complex &c)
{
    complex result ;

    result.real = a * c.real;
    result.imag =  a * c.imag;
 
    return result ;

}

int main()
{
    complex c1(5,6);
    c1.display();
    complex c2(8,7);
    c2.display();
    complex c3(9,15);
    c3.display();

    complex c4 , c5, c6 , c7;

    c4 = c1 +  c2;
    c4.display();

    c5 = c1 - c2;
    c5.display();

    c6 = c1*c3;
    c6.display();

    int n;
    cout<<"Enter A NUMBER TO BE MULTIPLIED "<<endl; 
    cin>>n;

    c7 = n * c2;
    c7.display();

    return 0;
}