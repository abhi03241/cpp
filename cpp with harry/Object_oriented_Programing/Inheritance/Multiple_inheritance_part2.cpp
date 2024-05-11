#include<iostream>
using namespace std ;

class base1
{
    protected :
        int data1;
    public : 
        void set_data1();
       
        int get_data1(void);
};

void base1 ::set_data1(void)
{
    cout<<"Enter the value of data 1 :"<<endl;
    cin>>data1;          
}

int base1 ::get_data1()
{
    return data1 ;
}


class base2
{
    protected :
        int data2;
    public : 
        void set_data2();
        
        int get_data2(void);
};

void base2 ::set_data2(void)
{
    cout<<"Enter the value of data 2 :"<<endl;
    cin>>data2;          
}

int base2::get_data2(void)
{
    return data2 ;
}


class process : public base1 , base2
{
    
    public :
    
    void proceed(void)
    {
        set_data1();
        set_data2();
        
    }
    void show(void)
    {
        cout<<" the value of data 1 : "<<get_data1()<<endl;
        cout<<" the value of data 2 : "<<get_data2()<<endl;
            
    }

    /* proteted vairaibles can be use directly in derived class */
    void show2(void)
    {
        cout<<" the value of data 1 : "<<data1<<endl;
        cout<<" the value of data 2 : "<<data2<<endl;
            
    }
};



int main()
{
    process abhi;
    abhi.proceed();

           //  OR
    // abhi.set_data1(); ---- could be use direcly no need to make proceed 
    // // abhi.set_data2(); ---- could be use direcly no need to make proceed 

    
    abhi.show();
    abhi.show2();

    
    return 0 ;
}