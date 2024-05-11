#include<iostream>
using namespace std ;

class complex
{
private:
    int a;
    int b;
    
public:
    
    void setdata(int v1 , int v2)
    {
        a = v1;
        b = v2;
    }
    
    
    void setdata_bysum(complex o1 , complex o2 )
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    
    void printnumber()
    {
        cout<<"Your complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }
   
};



int main()
{
    complex c1 , c2, c3 ;
    
    c1.setdata(7,8);
    c1.printnumber();

    c2.setdata(3,5);
    c2.printnumber();

    c3.setdata_bysum(c1,c2); // give c1 + c2
    c3.printnumber();




    return 0 ;
}