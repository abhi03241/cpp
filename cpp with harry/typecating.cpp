//***************TYPECASTING****************
#include<iostream>

using namespace std;

int main()
{
    int  x = 455;
    float y = 556.56;
    
    cout<<"the value of x is : "<<(float)x<<endl;
     cout<<"the value of y before typecasting  is : "<<y<<endl;
    cout<<"the value of y  after typecasting is : "<<(int)y<<endl;

    cout<<"the sum of x and y is : "<<(x + y) <<endl;

    cout<<"the sum of x and y is : "<<x + int(y) <<endl;

    cout<<"the sum of x and y is : "<<x + (int)y <<endl;

    cout<<"the sum of x and y is : "<<float(x) + y <<endl;
   
    return 0;
}
