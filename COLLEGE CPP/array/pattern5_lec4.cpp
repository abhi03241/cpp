#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cout<<"Enter any number : "<<endl;
    cin>>n;
    
    

    for (int  i = 1; i <= n; i++)
    {
        int count = i ;
        for (int j = 1 ; j <= i; j++)
        {
            cout<<count++<<" ";

        }
        cout<<endl;
    }
    

    return 0 ;
}