#include <iostream>
using namespace std;

// FOWARD DECLARATION
class y;

class x
{
private:
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(x ,y);
};

class y
{
private:
    int num;
    

public:
    void set_value(int value)
    {
        num = value;
    }
    
    friend void  add(x , y ); // yaha datatype use kiya hai

};

void add(x obj1, y obj2)
{
    cout << "The sum of X and Y class object is : " << (obj1.data + obj2.num) << endl;
}

int main()
{
    x a1;
    a1.setvalue(88);

    y b1;
    b1.set_value(5);

    add(a1,b1);
    return 0;
}