#include <iostream>
using namespace std;

class A
{

public:
    virtual void Display() = 0;
    void display()
    {
        cout << "kaise ho " << endl;
    }
};

class B :  public A
{

public:
    void Display()
    {
        cout << "Abhi" << endl;
    }
    void display() 
    {
         
        A :: display();

    }

    void display(int a) 
        {
             
            cout<<"Hello world"<<endl;
    
        }
    

};

int main()
{
    B b1;
    b1.display();
    b1.display(5);
   
    return 0;
}


/*  when we not have to make diffrent object


#include <iostream>
using namespace std;

class A
{
public:
    virtual void Display() = 0;
    void display()
    {
        cout << "Display from A" << endl;
        Display(); // Call the virtual function Display
    }
};

class B : public A
{
public:
    void Display() override
    {
        cout << "Display from B" << endl;
    }
};

int main()
{
    B b1;
    b1.display(); // Calls display from class A which internally calls Display from class B

    return 0;
}
*/