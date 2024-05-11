/*#include<iostream>
using namespace std ;

class point
{
private:
    int a , b ;
public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void printnumber(void)
    {
        cout<<"The point is ("<<a<<","<<b<<")"<<endl;
    }
    friend float distace_btw(point ,point );

};

float distace_btw(point obj1 ,point obj2 )
{
    float dis;
    dis = (((obj1.a - obj2.a)**2 +(obj1.b - obj.b)**2)**0.5) ;
    return dis;
}



int main()
{
    

    point p1(2,8);
    p1.printnumber();

    point p2(7,9);
    p2.printnumber();

    distace_btw(p1 ,p2);
    


    return 0 ;
}*/


//create a function which takes two point objects and computes the distance between those two points
//Hint :make it a friend function
#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x ,y ;
    friend void distance(point  ,point  );
    public:
    point (int a ,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
void distance(point o1 ,point o2){
    float dist;
dist=sqrt(pow(o2.x-o1.x ,2)+pow(o2.y-o1.y ,2));
cout<<dist<<endl;
}
int main()
{
   point p(1,1);
   p.display();
   point q(2,2);
   q.display(); 
   distance(p,q);

    return 0;
}