#include <iostream>
using namespace std;
# define PI 3.14

class volume
{
    float side , length , breath, height, radius ;
    float vol;
    public :
        volume()
        {
            side = 0;
            length = 0;
            breath = 0;
            height  = 0;
            radius = 0;

        }
        volume(float l ,float b ,float h)
        {
            l = length;
            b = breath;
            h = height;
            vol = l*b*h;

            cout<<"VOLUME is : "<<vol;
        }
        volume(float r,float h)
        {
            r = radius;
            vol = PI *r*r*h;

            cout<<"VOLUME is : "<<vol;
        }
        volume(float r)
        {
            r = radius;
            vol = (4.0/3.0)*PI*r*r*r;

            cout<<"VOLUME is : "<<vol;

        }
        // void display_data()
        // {
        //     cout<<"VOLUME is : "<<vol;
        // }
};

int main()
{
    float rad, r, hei, l, b, h;
    cout << "enter radius of sphere :" << endl;
    cin >> rad;

    cout << "enter radius,height of cylinder :" << endl;
    cin >> r >> hei;

    cout << "enter l,b,h of cuboid :" << endl;
    cin >> l >> b >> h;

    volume v1(l,b,h);
   // v1.display_data();

    return 0;

}