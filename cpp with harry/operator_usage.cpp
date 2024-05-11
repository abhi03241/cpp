#include<iostream>

int c = 10 ;
using namespace std ;

int main()
{
    /*int a , b, c;
    cout<<"enter the value of a :"<<endl;
    cin>>a;

    cout<<"enter the value of b :"<<endl;
    cin>>b;

    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"the global c is "<<::c; // global vairable
    */

    float d = 56.5f;
    long double e = 56.5L;
    cout<<"The value of d is : \n "<<d<<endl<<"The value of e is :\n"<<e;
    
    cout<<"THe size of 34.4 is : \n" <<sizeof(34.4)<<endl;
    cout<<"THe size of 34.4 is : \n" <<sizeof(34.4f)<<endl;
    cout<<"THe size of 34.4 is : \n" <<sizeof(34.4F)<<endl;
    cout<<"THe size of 34.4 is : \n" <<sizeof(34.4l)<<endl;
    cout<<"THe size of 34.4 is : \n" <<sizeof(34.4L)<<endl;
    return 0;
}

