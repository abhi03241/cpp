// Write C++ program to find the first and last digit of any number 

#include<iostream>
using namespace std ;

int main()
{
    int n  , first  , last ;
    cout<<"Enter the number of your  choice : "<<endl;
    cin>>n;

    /* last */
    // this will give last digit  ---> eg 1234 = 4 gives remainder

    last = n % 10; 

    // -------------
    // first digit 

    first = n;

    while(first >= 10) // ---> minimum 2 digit number 
    {
        first = first/10;  /*  eg : 1234 = 123
                                123  = 12
                                12   = 1  */
    }

    cout<<"First Digit of a number is : "<<first<<endl;

    cout<<"Last Digit of a number is : "<<last<<endl;

    
    return 0 ;
}