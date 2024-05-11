#include <iostream>
using namespace std;
class rectangle
{
private:
    float length;
    float width;

public:
    void setlength(float);
    void setwidth(float);
    float perimeter();
    float area();
    void show();
    int samearea(rectangle &);
};

void rectangle :: setlength(float l)
{
    length = l;
    
}
void rectangle :: setwidth(float w)
{
    width = w ;
    
}
float rectangle :: perimeter()
{
    
    float peri = 2 * (length + width);
    return peri; 
}
float rectangle :: area()
{
   
    float area = (length * width);
    return area; 
}
void rectangle::show()
{
    cout << "Length is " << length << endl;
    cout << "width is " << width << endl;
    cout<<"Primeter is "<<perimeter()<< endl;
    cout<<"Area is "<<area()<<endl<< endl;
}

/*int rectangle :: samearea(rectangle r1 , rectangle r2)
{
    if(r1.area() == r2.area())
    {
        cout<<"They have same area "<<endl;
    }
    else
    {
        cout<<"area is not same "<<endl;
    }

}
*/
int rectangle :: samearea(rectangle &r)
{
    if(area() == r.area())
    {
        cout<<"They have same area "<<endl;
    }
    else
    {
        cout<<"Their area is not same "<<endl;
    }

}

int main()
{

    rectangle r1, r2 ;
     r1.setlength(5);
     r1.setwidth(18.9f);
     r1.show();
     r1.perimeter();
     r1.area();

    r2.setlength(15);
    r2.setwidth(6.3f);
    r2.show();
    r2.perimeter();
    r2.area();


    r1.samearea(r2);

    // r3.samearea(r1,r2);

    return 0;
}
