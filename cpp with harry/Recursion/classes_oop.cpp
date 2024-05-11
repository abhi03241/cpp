#include<iostream>
using namespace std ;

class employee
{
    private:
        int a,b,c;
    public :
        int d ,e ;
        void setdata(int a, int b,int c); // Declaration
        
        void getdata()
        {
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;

        }
};

void employee :: setdata(int a1, int b1,int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee for_abhi;
    for_abhi.setdata(1,2,3);
    
    for_abhi.d = 22;
    for_abhi.e = 34;

    for_abhi.getdata();
    
    return 0 ;
}