#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cout<<"Enter any number : "<<endl;
    cin>>n;
    for (int  i = 0; i < n ; i++)
    {
        //space print karo
        for(int space = n - i; space; space-- )
        {
            cout<<" ";
        }
        // 1st triangle print karo !!
        for (int j = 1; j <= i ; j++)
        {
            cout << j;
        }

       // 2nd triangle print karo !!
        int start = i - 1;
        while(start) 
        {
            cout<<start;
            start = start - 1;
        }
        

        cout<<endl;

    }
    return 0 ;
}