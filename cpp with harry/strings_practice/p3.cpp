// Write C++ program to reverse a string enter by user !! Cpp program to reverse a string enter by user
#include<iostream>
#include<string.h>
using namespace std ;

int main()
{
    int i = 0 , j = 0 , length =  0;
    char string[100];
    char rev_string[100];

    cout<<"Enter string :"<<endl;
    cin>>string;

    length = strlen(string);

    for(i = length - 1 ; i >= 0 ; i-- )
    {
        rev_string [j] =  string[i];
         
        j++;
    }

    rev_string [j] = '\0';
    cout<<rev_string;
    return 0 ;
}
         //  OR
         // METHORD 2 :
/*#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50], temp;
    int i, j;
    cout << "Enter a string : ";
    gets(str);
    j = strlen(str) - 1;
    for (i = 0; i < j; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout << "\nReverse string : " << str;
    return 0;
}*/