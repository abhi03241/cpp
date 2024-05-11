#include<iostream>
using namespace std ;

int main()
{
    int n , fact = 1;
    
    cout << "Enter number to be find its factorial : ";
    cin >> n;
    
    for(int i = 1 ; i <= n ; i++ )
    {
        fact = fact *i;
        
    }
    cout<<"factorial = "<<fact;

    return 0 ;
}