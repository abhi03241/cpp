/*#include<iostream>
using namespace std ;

int fib(int n)
{
    if((n==1) || (n == 0))
    {
        return n;
    }
    else
    {
        return(fib(n - 2) + fib( n - 1));
    } 

}

int main()
{
   
    int a , i;
    cout<<"Enter  number of element you want to print "<<endl;
    cin>>a;

    cout<<"The fibonacci series of " << a << " element is : \n" ;
    while(i < a)
    {
      cout << " " << fib(i);
      i++;
    }
    
    return 0 ;
}*/

#include <iostream>
using namespace std;
int fib(int x)
 {
   if((x==1)||(x==0)) {
      return(x);
   }
   else {
      return(fib(x-1)+fib(x-2));
   }
}
int main()
{
   int a , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> a;
   cout << "\nFibonnaci Series : ";
   while(i < a) 
   {
      cout << " " << fib(i);
      i++;
   }
   return 0;
}