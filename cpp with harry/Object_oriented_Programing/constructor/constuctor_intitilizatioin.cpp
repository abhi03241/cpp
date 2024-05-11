/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class Test
{
    int a;
    int b;

public:

    // Test(int i, int j) : a(i), b(a + j) we can also use like this
    // Test(int i, int j) : b(j), a(i+b) ---> we can't USE LIKE THIS BECAUSE WE HAVE DECLARED "a" first then "b" 
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}

