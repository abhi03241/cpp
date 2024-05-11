#include<iostream>
#include<math.h>
using namespace std ;

int main()
{
    int n , first_digit, last_digit, sum ;

    cout<<"Enter the number whose first and last digit you want to sum :"<<endl;
    cin>>n;

    last_digit = n % 10;

    first_digit = n;
    while(n >= 10)
    {
        first_digit = n/10;
    }
    first_digit = n ;
   
    // sum 
    sum = first_digit + last_digit;

    cout<<"The sum of first and last digit is :"<<sum<<endl;
    return 0 ;
}