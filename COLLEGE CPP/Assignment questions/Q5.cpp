#include<iostream>
using namespace std ;


float volume(float r)
{
    return ((4* 3.14 * r * r * r )/3);
}
float volume(float r, float h)
{
    return (3.14 * r * r * h);
}
float volume(float l, float b, float h)
{
    return (l * b * h);
}

int main()
{
    float rad, r, hei, l, b, h;
    cout << "Enter radius of sphere :" << endl;
    cin >> rad;

    cout << "Enter radius,height of cylinder :" << endl;
    cin >> r >> hei;

    cout << "Enter l,b,h of cuboid :" << endl;
    cin >> l >> b >> h;

    cout << "volume of sphere is :" << volume(rad)<<endl;

    cout << "volume of cylinder is :" << volume(r, hei)<<endl;

    cout << "volume of cuboid is :" << volume(l, b, h)<<endl;

    return 0;
}
