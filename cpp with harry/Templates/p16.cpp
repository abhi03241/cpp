// Cpp program to convert a string to a lower case

#include<iostream>
#include<string.h>
using namespace std ;

int main()
{
    char str[10];
    cout<<"Input a string to convert it in lower case :"<<endl;
    cin.getline(str , 10 );
    cout <<" Character in lower case : "<<strlwr(str)<<endl;

    return 0 ;
}