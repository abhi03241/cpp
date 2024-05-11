#include<iostream>
using namespace std ;

class students
{
private:
    int admno;
    char sname[20];
    float eng , math ,science;
    float total ;
public:
    void take_data();
    float ctotal();
    void showdata();
};

void students::take_data()
{
    cout<<"enter sname and admno"<<endl;
    cin.getline(sname,20);
    cin>>admno;
    
    cout<<"enter marks of eng , maths , science : "<<endl;
    cin>>eng>>math>>science;

}

float students::ctotal( )
{
   /*float a ,float b  , float c
   float ,float , float */
    int a = eng ;
    int b = math ;
    int c = science ;

    total = a + b + c;

    return total;
}

void students::showdata()
{
    cout<<"Name is : "<<sname<<endl;
    cout<<"admno is : "<<admno<<endl;
    cout<<"marks of eng , math , science  is : "<<eng<<" "<<science<<" "<<math<<endl;
    cout << "TOtal marks :"<<total<<endl;
}





int main()
{
    students s1 ;
    s1.take_data();
    s1.ctotal();
    s1.showdata();
    return 0 ;
}