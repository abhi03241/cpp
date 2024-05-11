#include<iostream>
using namespace std ;
class complex 
{
    int a, b ;
public:
    // CONSTRUCTORS 

    complex(void);
    void printnumber()
    {
        cout << "Your complex number is : " << a << " + " << b << "i" << endl;
    }
};

complex :: complex(void) // ----> This is default constructor as it takes no parameter
{
    a = 7;
    b = 0;
    cout<<"hello world! :)"<<endl;
}

int main()
{
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0 ;
}