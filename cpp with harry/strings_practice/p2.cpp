// chek program to check whether a character is alphabet, digit or special character
#include<iostream>
using namespace std ;

int main()
{
    char c;
    if((c >= 'a') && (c<='z') ||(c >= 'A') && (c<='Z'))
    {
        cout<< c <<" = is a alphabet";
    }
    else if((c == 0)&&(c== 9))
     {
        cout<<c<<" = is a single digit";
    }
    else
    {
        cout<<c<<" = is a special character";
    }
    return 0;
}