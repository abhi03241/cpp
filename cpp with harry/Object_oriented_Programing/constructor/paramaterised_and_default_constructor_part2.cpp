#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

        friend void Point(Point , Point );

};
void distance(Point p1, Point p2){
    int x_diff = (p2.x-p1.x);
    int y_diff = (p2.y-p1.y);
    int diff = sqrt(pow(x_diff,2)+pow(y_diff,2));
    cout<< "The difference is : "<<diff<<endl;
}
int main(){
    Point p(1, 7);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    distance(p,q);
    

    return 0;

}
