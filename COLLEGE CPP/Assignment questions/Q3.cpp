#include<iostream>
#include<string.h>
using namespace std ;

class flight
{
private:
    int flight_no ;
    string destination;
    float distance ;
    float fuel ;
    
    float CALFUEL()
    {
        if (distance <= 1000)
        {
            fuel = 500;
        }
        else if((distance > 1000) && (distance <= 2000))
        {
            fuel = 1100;
        }
        else
        {
            fuel = 2200;
        }
        return fuel;
    }
public:
    void FEEDINFO();
    void SHOWINFO();
};

void flight::FEEDINFO( )
{
    cout<<"Enter destination ,flight number , distance, fuel "<<endl;
    getline(cin, destination);
    cin>>flight_no;
    cin>>distance;
    
}

void flight :: SHOWINFO()
{
    cout<<"destination ,flight number , and  distance is : "<<endl;

    cout<<destination<<endl;

    cout<<flight_no<<endl;

    cout<<distance<<endl;

    cout<<"Fuel is : "<<CALFUEL()<<endl;

}

int main()
{
    flight f1;
    f1.FEEDINFO();
    f1.SHOWINFO();
    return 0 ;
}