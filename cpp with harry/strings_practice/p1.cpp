
#include<iostream>
using namespace std ;

int main()
{ int a = 0 , b = 0 ,temp = 0;
    cout<<"Enter values of a and b"<<endl;
    cin>>a;
    cin>>b;
    cout<<"The values of a is "<<a<<" and b is "<<b<<" before swapping"<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"The values of a is "<<a<<" and b is "<<b<<" after swapping"<<endl;

    
    return 0 ;
}



