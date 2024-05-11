#include<iostream>
using namespace std ;
int product( int a , int b = 12 ) ///default argument
{
    int c  = a * b ;
    return c;
}

int main()
{
    int n1 , n2 ;
    cout<<"Enter first number"<<endl;
    cin>>n1;
    cout<<"Enter second number"<<endl;
    cin>>n2;
     
    cout<<"product is : \n";
    cout<<product(n1)<<endl; // this will defaullt take value = 12

    cout<<product(n1,n2)<<endl; // WE CAN GIVE VALUE OF n2 AS WELL

 
    return 0 ;
}