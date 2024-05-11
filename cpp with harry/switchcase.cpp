#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int age ;
    cout<<"Tell me your age"<<endl;
    cin>>age;  
    switch(age)
    {
    case 17  :
    
        cout<<"you are under age "<<endl;
        break;
    case  18 :
        cout<<"you are eligible for driving "<<endl;
        break;
    default :
        cout<<"you have given uknown age "<<endl;
        break;
    }
    return 0;

}