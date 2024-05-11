#include<iostream>
using namespace std ;

int sum( int a , int b )
{
    int c  = a + b ;
    return c;
}

// call by reference function
int swap( int *a, int *b)
{
    int temp = *a;
    *a = *b ;
    *b = temp;
}

int main()
{
    int n1 , n2 ;
    cout<<"Enter first number"<<endl;
    cin>>n1;
    cout<<"Enter second number"<<endl;
    cin>>n2;

    cout<<"Before swapping the value of n1 and n2 is :"<<n1<<"\t"<<n2<<endl;
    // call by reference
    swap(&n1,&n2);
    cout<<"After swapping the value of n1 and n2 is :"<<n1<<"\t"<<n2<<endl;

    // call by value
    cout<<"sum is : \n";
    cout<<sum(4,5)<<"\n";
    return 0 ;
}