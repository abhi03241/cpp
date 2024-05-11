#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int age ;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<"you can not come to my party"<<endl;

    }
    else if(age == 18)
    {
        cout<<"you are invited"<<endl;
    }
    else
    {
        cout<<"you are invited"<<endl;
    }

    return 0;
}