#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }

        void getData_a(){
            cout<<"The value of a is "<<a<<endl;
        }
};

class B{
    int b;
    public:
         B & setData_b(int b){ // ----> note how we use it
            this->b = b;
            return *this;
        }

        void getData_b(){
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){
    A a;
    a.setData(4);
    a.getData_a();
    
    B b;
    b.setData_b(56).getData_b(); // ----> note how we use it

    return 0;
}
