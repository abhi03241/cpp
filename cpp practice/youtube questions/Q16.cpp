#include<iostream>
#include<string.h>
using namespace std ;


int main()
{
    char string[10];
    cout<<"enter a stirng to convert it into a lower case :";
    cin.getline(string,10);

    cout<<"String in lower case is :"<<strlwr(string);


    return 0 ;
}