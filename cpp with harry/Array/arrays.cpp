#include<iostream>
using namespace std ;

int main()
{
    //array vairable
    int marks[] = {1,2,3,8,9,7,6};

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
// WE CAN CHANGE VALUE  OF ANY OF ARRAY 
    marks[4] = 99; // we have change value from 9 to ---> 99
    
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;
    cout<<marks[6]<<endl;


    return 0 ;
}