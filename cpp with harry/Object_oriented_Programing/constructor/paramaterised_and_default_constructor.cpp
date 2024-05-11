#include<iostream>
using namespace std;

class complex 
{
    int a, b ;
public:
    // CONSTRUCTORS 

    complex(int x ,int y);
    void printnumber()
    {
        cout << "Your complex number is : " << a << " + " << b << "i" << endl;
    }
};
complex :: complex(int x ,int y) // ----> This is Paramitarised constructor as it takes no parameter
{
    a = x;
    b = y;
    cout<<"hello world! :)"<<endl;
}

int main()
{
    complex p(4,5); // Explicit 
    p.printnumber();

    complex q = complex(8,9); // Imlicit
    q.printnumber();

    return 0 ;
}