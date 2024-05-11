#include<iostream>
using namespace std ;
class c2;
class c1
{
    private: 
        int val1;
        friend void swap( c1 &, c2 &);
    public:
        void setvalue(int a)
        {
            val1 = a;
        }
        void display(void)
        {
            cout<<val1<<endl;
        }
    

};

class c2
{
    private: 
        int val2;
        friend void swap( c1 & , c2 &);
    public:
        void setvalue(int a)
        {
            val2 = a;
        }
         void display(void)
        {
            cout<<val2<<endl;
        }
    
};

void swap( c1 &obj1, c2 &obj2) // YAHA PAR OBJECTS KE NAME LIKHNA
{
    int temp = obj1.val1;
    obj1.val1 = obj2.val2;
    obj2.val2 = temp;
}

int main()
{
    c1 x;
    x.setvalue(5);

    c2 y;
    y.setvalue(3);

    swap(x,y);

    cout<<"The value of C1 after swapping becomes : "<<endl;
    x.display();
    cout<<"The value of C2 after swapping becomes : "<<endl;
    y.display();
    return 0 ;
}