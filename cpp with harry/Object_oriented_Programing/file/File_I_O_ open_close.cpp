#include<iostream>
#include <fstream>
using namespace std ;

int main()
{
    ofstream out ;
    out.open("sample60_b.txt");
    out<<"This is me \n";
    out<<"This is me in base class \n";
    out.close();

    ifstream in ;
    string st,st2 ;
    in.open("sample60_b.txt");
    getline(in,st);
    getline(in,st2);
    in>>st>>st2 ;
    cout<<st<<endl<<st2 ;
    in.close();
    return 0 ;
}