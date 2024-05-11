#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cout<<"Enter any number : "<<endl;
    cin>>n;
    for (int  i = 0; i < n ; i++)
    {
            // *** space print karo !! ***
        /*int space = n - i;
        while(space)
        {
            cout<<" ";
            space-- ;
        }*/
        for(int space = n - i; space; space-- )
        {
            cout<<" ";
        }
        // star print karo !!
        for (int j = 0; j < i ; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    
    return 0 ;
}