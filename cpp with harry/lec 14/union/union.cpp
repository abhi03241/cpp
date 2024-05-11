#include<iostream>
using namespace std ;

union money
{
    int  rice; // 4 bytes
    char car; // 1 bytes 
    float pounds ; // 4 bytes
};

// maximum datatype ki bytes memory allote hogi !!

int main()
{
    union money m1;
    m1.rice = 34 ;

    cout<<"THE VALUE IS \n"<<m1.rice<<endl;

    
    return 0 ;
}