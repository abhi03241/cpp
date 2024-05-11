#include<iostream>
using namespace std ;

int main()
{
    int cars[]  = {22,54,66,89,88};
    int i = 0;
    /*for(int i ; i < 5 ; i++)
    {
        cout<<"The cars are  " <<i<< " is " <<cars[i] <<endl;
    }*/
    while(i < 5)
    {
        cout<<"The cars are  " <<i + 1 << " is " <<cars[i] <<endl;
        i ++;
    }

    return 0 ;
}