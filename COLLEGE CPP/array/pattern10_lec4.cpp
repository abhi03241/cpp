#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cout<<"Enter any number : "<<endl;
    cin>>n;
    
    int count = 1;
    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1 ; j <= n; j++)
        {
            
            char ch = 'A' + i + j - 2 ;    // *** Basic Logic ***
            cout<<ch <<" ";
            count++;
        }
        cout<<endl;
    }
    

    return 0 ;
}