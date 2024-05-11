//C++ program to calculate the total marks, percentage and division of student 


#include<iostream>
#include<string.h>
using namespace std ;

int main()
{
    int rollno, phy , che , maths;
    float percentage , total ;
    char name[30] , division[10];

    cout <<"Enter roll no. of a student "<<endl;
    cin>>rollno;

    cout <<"Enter Name of a student "<<endl;
    cin>>name;

    cout <<"Enter marks of subjects of a student "<<endl;
    cin>>phy>>che>>maths;

    total = maths + phy + che ;

    percentage = (total/300)*100;

    if(percentage >= 60)
    {
        strcpy(division,"First");
    }
    else if(percentage < 60 && percentage >= 33)
    {
        strcpy(division,"second");
    }
    else
    {
        strcpy(division,"fail");
    }
    cout<<"Roll no "<<rollno<<endl;
    cout<<"Name "<<name<<endl;
    cout<<"physics mark "<<phy<<endl;
    cout<<"PERCENTAGE "<<percentage<<endl;
    cout<<"division "<<division<<endl;
     cout<<"Total "<<total<<endl;

    return 0 ;
}