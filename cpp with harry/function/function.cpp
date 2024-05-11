#include<iostream>
using namespace std ;
int sum( int a , int b );

int main()
{
    int n1 , n2 ;
    cout<<"Enter first number"<<endl;
    cin>>n1;
    cout<<"Enter second number"<<endl;
    cin>>n2;

    cout<<"sum is : \n";
    cout<<sum(n1,n2)<<"\n";

    return 0 ;
}

int sum( int a , int b )
{
    int c  = a + b ;
    return c;
}