#include<iostream>
using namespace std ;

class simple 
{
    int data1, data2;
public:
    simple(int a,int b = 9 ) // ----> setting default value of b = 9
    {
        data1 = a;
        data2 = b;
    }
    void printdata(void);
   
};

void simple :: printdata(void)
 {
        cout<<"The value of data1 and data2 respectively "<<data1<<" and "<<data2<<endl; 
 }


int main()
{
    simple s1(4); // default value of b == 9
    s1.printdata();
    
    return 0 ;
}