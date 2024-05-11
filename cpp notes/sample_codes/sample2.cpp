// #include<iostream>
// using namespace std;

// class Shape
// {
// protected:
//     int x,y;
//     int area;
// public:
// Shape()
// {
//     x = 0;
//     y = 0;
// }
//     void get_data(){
//         cout<<"enter x and y \n";
//         cin>>x>>y;
//     }
//     virtual int cal_area();
//     void display()
//     {
//         cout<<" area is : "<<area;
//     }
// };



// class triangle:public Shape
// {

// public :
//    int cal_area()
//    {
//          area = x * y;
//         return area;
//    } 
// };



// class rectangle:public Shape
// {

// public:
//     int cal_area()
//    {
//         area = (x * y) / 2;
//         return area;
//    } 
 
// };



// int main(){

//     triangle t;
    

//     t.get_data();

//     t.cal_area();

//     t.display();

//     rectangle r;
//     r.get_data();

//     r.cal_area();

//     r.display();

    
//     return 0;
// }

#include<iostream>
using namespace std;

class shape
{
public:
    double x,y;
    shape(){
        x = 0;
    y = 0;
    };
    virtual void get_data()=0;
    virtual void display()=0;
};


class triangle:protected shape
{
public:
   
    void get_data(){
        cout<<"enter x and y for tri \n";
        cin>>x>>y;
    }
    void display(){
        double area=((x*y)/2);
        cout<<"area is : "<<area<<endl;
    }   
};

class rectangle:protected shape
{
public:
   
    void get_data(){
        cout<<"enter x and y for rec \n";
        cin>>x>>y;
    }
    void display(){
        cout<<"area is : "<<(x*y);
    }
};

int main(){

    triangle t;
    rectangle r;

    t.get_data();
    t.display();

    r.get_data();
    r.display();

    
    return 0;
}