#include<iostream>
using namespace std ;

/*struct emp
{
    int empID;
    char favchar;
    float networth;


};*/

//  ------> USING typedef
typedef struct emp
{
    int empID;
    char favchar;
    float networth;


}emp;



int main()
{
    /*struct emp abhi;*/

// we can use emp here as we have use typedef
    emp abhi;


    abhi.empID = 1;
    abhi.favchar = 'c';
    abhi.networth = 12000000000000000; 

    cout<<abhi.empID<<endl;
    cout<<abhi.favchar<<endl;
    cout<<abhi.networth<<endl;


    return 0 ;
}