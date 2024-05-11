#include<iostream>
using namespace std ;

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

    complex operator++(); //post incre

    complex operator--(); // post decre

    complex operator++(int) ; // pre incre
    
    complex operator--(int);// pre decre

    void display()
    {
        cout<<"complex number is :"<<real<<" +i"<<imag<<endl;
    }
};

complex complex :: operator++()
{
    complex total;
    total.real = ++real;
    total.imag = ++imag;
   
    return total;
}

complex complex :: operator--()
{
    complex total;
    
    total.real = --real;
    total.imag = --imag;
    return total;
}

complex complex :: operator++(int )
{
    complex total;
    
     total.real = real++;
    total.imag = imag++;
    return total;
}

complex complex :: operator--(int)
{
    complex total;

    total.real = real-- ;
    total.imag = imag-- ;
    
    return total;
}

int main()
{
    complex c1(2,5) , c2(5,7) ,c3(8,9) ,c4(10,12);
   

    ++c3;
    c3.display();

    --c4;
    c4.display();

    c1++;
    c1.display();

    c2--;
    c2.display();

     int i = 3;
    cout<<i--<<endl;

    int a = 4;
    cout<<--a<<endl;
    
    return 0 ;
}