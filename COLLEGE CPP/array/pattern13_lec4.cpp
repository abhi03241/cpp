#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cout<<"Enter any number : "<<endl;
    cin>>n;

    for (int  i = 1; i <= n; i++)
    {
        char ch = 'A'+ n - i;  // logic kathin hai iska !!
        
        for (int j = 1 ; j <= i; j++)
        {
            cout<<ch<<" "; 
            ch++;  // major step

        }
        cout<<endl;
    }
    

    return 0 ;
}