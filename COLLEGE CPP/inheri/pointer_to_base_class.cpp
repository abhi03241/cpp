#include<iostream>
using namespace std;

class base
{

public:
   
   void display()
   {
        cout <<"Display base :"<<endl;

   }
   virtual void show()
   {
        cout<<"show base :"<<endl;
   }
};
class derived : public base 
{

public:
   
   void display()
   {
        cout <<"Display derive :"<<endl;

   }
    void show()
   {
        cout<<"show derived  :"<<endl;
   }
};
int main()
{
    base B ;
    derived D;


    // base  *bptr;

    // bptr = &B;
    cout<<"bptr points to base "<<endl;
    bptr ->display();
    bptr->show();

    bptr = &D;
    cout<<"bptr points to derive  "<<endl;
    bptr ->display();
    bptr->show();



     return 0 ;
}
