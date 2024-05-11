#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cout<<"Enter any number : "<<endl;
    cin>>n;

    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1 ; j <= n; j++)
        {
            char ch = 'A' + j -  1 ;  // *** Basic logic ***
            cout<<ch <<" ";

        }
        cout<<endl;
    }
    

    return 0 ;
}