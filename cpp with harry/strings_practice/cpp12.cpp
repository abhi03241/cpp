// C++ program to compare two strings using strcmp

#include<iostream>
#include<string.h>
using namespace std ;

int main()
{
    char str1[100] , str2[100];
    
    cout<<"Enter string 1 :"<<endl;
    cin>>str1;

    cout<<"Enter string 2 :"<<endl;
    cin>>str2;

    if(strcmp(str1,str2) ==  0)
    {
        cout<<"They are Equal";
    }
    else
    {
        cout<<"They are not Equal";
    }


    return 0 ;
}