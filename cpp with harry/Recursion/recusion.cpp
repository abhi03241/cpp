#include<iostream>
using namespace std ;

int fact(int n)
{
    if((n==1) || (n == 0))\
    {
        return 1;
    }
    else{
        return  (n * fact(n-1));
    } 

}

int main()
{
    int a;
    cout<<"Enter first number"<<endl;
    cin>>a;

    cout<<"The FACTORIAL OF " << a << "  is : \n" <<fact(a)<<endl;

    return 0 ;
}