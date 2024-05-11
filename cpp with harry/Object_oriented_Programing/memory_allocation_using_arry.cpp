#include<iostream>
using namespace std ;

class shop
{
private:
    int itemid[100];
    int itemprice[100];
    int counter ;
public:
    void initial_counter(void)
    {
        counter = 0;

    }
    void set_price(void);
    void display_price(void);

};

void shop ::set_price(void)
{
    cout<<"Enter id of item "<<counter + 1 <<endl;
    cin>>itemid[counter];
    cout<<"Enter price of item "<<endl;
    cin>>itemprice[counter];
    counter ++ ; // YAHA INCREMENT  KIYA HAI
}

void shop :: display_price(void)
{
    for (int i = 0; i < counter ; i++)
    {
        cout<<"The price of " <<itemid[i]<<" is : "<<itemprice[i]<<endl;
    }
    
}


int main()
{
    shop Dukan;
    Dukan.initial_counter();
    Dukan.set_price();
    Dukan.set_price();
    Dukan.set_price();
    Dukan.set_price();
    Dukan.display_price();
    
    return 0 ;
}