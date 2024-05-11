// Write C++ program to print all natural numbers in reverse order :
#include<iostream>
using namespace std ;

int main()
{
    int n = 0;

    cout<<"Enter value of n"<<endl;
    cin>>n;
    
    for(int i = n ; i>=1 ; i--)
    {
        cout<<i<<"\n";
    }
    return 0 ;

}