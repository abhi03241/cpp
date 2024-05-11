#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
    private:
        T a;
        T b;
    public:
        Arithmetic (T a, T b);
        T add();
        T sub();
};

template <class T> 
Arithmetic<T> :: Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>    //  ***HAR BAAR FIR SE TEMPLATE FUNCTION LIKHNA PADEGA*** //
T Arithmetic<T> :: add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>  //  ***HAR BAAR FIR SE TEMPLATE FUNCTION LIKHNA PADEGA*** //
T Arithmetic<T> :: sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic<int> ar1(10, 5);
    cout<<ar1.add()<<endl;
    cout<<ar1.sub()<<endl;
    
    Arithmetic<float> ar2(10.56, 5.25);
    cout<<ar2.add()<<endl;
    cout<<ar2.sub()<<endl;
}