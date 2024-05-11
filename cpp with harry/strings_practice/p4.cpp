#include<iostream>
using namespace std ;

int main()
{
    cout<<"Enter any characcter :"<<endl;
    char c;
    cin>>c;

    ((c >= 'a') && (c<='z') ||(c >= 'A') && (c<='Z'))? cout<<"Alphabet": cout<<"Not an Alphabet";

    return 0 ;
}