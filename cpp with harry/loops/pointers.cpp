#include<iostream>
using namespace std;
 
int main()
{
    int a = 3;
    int *b;
    b = &a;
    // & ------>(Address of)operator
    cout<<"The address of a is :" << &a <<endl;
    cout<<"The address of a is : "<< b <<endl;

    //* ----->> dereference operator(VALUE)
    cout<<"The value at address b is : "<< *b <<endl;

    // pointers to pointers
    int **c = &b;
    cout<<"The address of b is :"<<&b<<endl;
    cout<<"The address of b is :"<<c<<endl;

    cout<<"The value at address c is : "<< *c <<endl;
    cout<<"The value at address value_at(Value_at(c)) is : "<< **c <<endl;


    return 0 ;
}