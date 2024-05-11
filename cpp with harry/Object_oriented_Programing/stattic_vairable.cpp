#include<iostream>
using namespace std ;
class Employee
{
private:
    int id;
    static int count;
    
public:
    void setdata(void)
    {
        cout<<"Enter I'd "<<endl;
        cin>>id;
        count ++ ;
    }
    void getdata(void)
    {
        cout<<"Employee I'd is : "<<id<<" and this is employee number "<<count<<endl;
        
        // cout<<id; THIS WILL THROWS  AN ERROR AS ID IS NOT A STATIC VAIRABLE
    }

};

int Employee :: count;   // Default value is 0


int main()
{
    Employee sch,lib,coll;
   
    /* we can't do this because they are private
    sch.id = 1;
    sch.count = 1;*/

    sch.setdata();
    sch.getdata();

    lib.setdata();
    lib.getdata();

    coll.setdata();
    coll.getdata();
    return 0 ;
}