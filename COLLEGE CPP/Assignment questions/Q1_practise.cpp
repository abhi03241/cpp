// class distance
// km and m


#include<iostream>
using namespace std ;


class Distance {
private:
    float km , m ;
public : 
        Distance()
        {
            km = 0 ;
            m = 0;
        }
        Distance(float kilometer, float  meter )
        {
            km = kilometer ;
            m = meter;
        }
        Distance(Distance &d)
        {
            km = km + d.km;
            m = m + d.m;
        }

    void display() {
        cout << "Distance: " << km << " kilometers and " << m << " meters" << endl;
    }

    void sum(Distance &d1 ,Distance &d2)
    {   
        
        km = d1.km + d2.km;
        m = d1.m + d2.m;

        if (m > 1000)
        {
            km = km + m/1000;
        }

    }
};

int main()
{
    

    Distance d1(5, 250);
    d1.display();

    Distance d2(7, 2000);
    d2.display();

    Distance d3;
    d3.sum(d1,d2); 
    d3.display();

    
    
    // Distance d6(d1);
    // d6.display();

    return 0;
}

