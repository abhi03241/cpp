#include<iostream>
using namespace std ;

int main()
{
    int character = 0 ;
    char chr = 'A';

    do
    {
        character = int(chr);
        character++ ;

        chr = char(character);
    } while (chr <= 'Z');
    
    return 0 ;
}