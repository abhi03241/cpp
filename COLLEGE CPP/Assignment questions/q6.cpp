#include<iostream>
using namespace std ;
class complex 
{
    float  real , imaginary  ;
    public :
        complex()
        {
            // real = 0;
            // imaginary = 0;
        }
        void set_data(float r=0 , float imag=0)
        {   
              real = r;
            imaginary =  imag ;
        }
        complex sum(complex &c)
        {
            complex result ;
            result.real = real + c.real;
            result.imaginary = imaginary + c.imaginary;
            return result ;
        }
        void display()
        {
            cout<<"complex no. is : "<<real<<" + i"<<imaginary<<endl;
            //cout<<sum();
        }
};
int main()
{
    complex c1 , c2 ,c3;
    c1.set_data(4.0,3.0);
    c2.set_data(5.0,6.0);
    c3 = c1.sum(c2);
    c1.display();
    c2.display();
    c3.display();
    return 0 ;
}