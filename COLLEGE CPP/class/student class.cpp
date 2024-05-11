#include<iostream>
#include <string.h>
using namespace std ;

class students 
{
    private :
        int roll ;
        int admission_no;
        //char name[100];
        string name ;
        int marks_m1;
        int marks_m2;
        int marks_m3;
        

    public :
        void input_data()
        {
            cout<<"Enter name: "<<endl;
            //cin.getline(name,100);
            getline(cin,name);
            cout<<"Enter roll number "<<endl;
            cin>>roll;
            cout<<"Enter admission number "<<endl;
            cin>>admission_no;
           
            cout<<"Enter marks in subjet1 "<<endl;
            cin>>marks_m1;
            cout<<"Enter admission number "<<endl;
            cin>>marks_m2;
            cout<<"Enter admission number "<<endl;
            cin>>marks_m3;
           
        }
        void display_data()
        {
             
            cout<<"roll number "<<roll<<endl;
            cout<<" name :"<<endl;
            cout<<"marks in subjet1 "<<marks_m1<<endl;
            cout<<"marks in subjet1 "<<marks_m2<<endl;
            cout<<"marks in subjet1 "<<marks_m3<<endl;
            cout<<"admission number "<< admission_no<<endl;
           cout<<"TOTAL marks is : "<<marks_m1+marks_m2+marks_m3<<endl;
        
        }
};

int main()
{
    /*students s1;
    s1.input_data();
    s1.display_data();*/

    students s2[2];

    for (int  i = 0; i < 50; i++)
    {
        cout<<"data for student "<<i+1<< " is "<< endl;
        s2[i].input_data();
    }

    for (int  i = 0; i < 50; i++)
    {
        cout<<"data for student "<<i+1<< " is "<< endl;
        s2[i].display_data();
    }
    
    return 0 ;
}