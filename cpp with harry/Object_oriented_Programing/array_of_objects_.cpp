#include<iostream>
using namespace std ;

class emp
{
private:
    int id = 1000 ;
    int salary;
public:
    void setId(void)
    {
        salary = 333;
        cout<<"Enter id od Employee";
        cin>>id;

    }
    void getId(void)
    {
        cout<<"the id of employee is : "<< id<<endl;
    }
};


int main()
{
    emp naveen , vanshika , vaishnavi;

    /* one way
    naveen.setId();
    naveen.getid();

    vanshika.setId();
    vanshika.getid();

    vaishnavi.setId();
    vaishnavi.getid();
    */

// Another way when data is large using ARRAY
    emp fb[4];
    for(int i = 0 ; i < 4 ; i++)
    {
        
        fb[i].setId();
        fb[i].getId();

    }
    return 0 ;
}